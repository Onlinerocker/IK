#include "AIKController.h"
#include <cmath>

bool AIKController::solveIKTwoLink(ASkeleton& skeleton, 
    const AVector3& goalPos)
{
    // Assume that skeleton is a two link chain 
    // solve for rotations for the first and second joint 
    // such that the position of the last joint is at goalPos
    AJoint* root = skeleton.getRoot();
    AJoint* j1 = root->getChildAt(0);
    AJoint* j2 = j1->getChildAt(0);

    double l1 = j1->getLocal2Parent().translation.length();
    double l2 = j2->getLocal2Parent().translation.length();

    double r = (goalPos - root->getLocal2Global().translation).length();
    
    double rad = ((r * r) - (l1 * l1) - (l2 * l2)) / (-2 * l1 * l2);
    rad = acos(rad);

    double theta2Z = rad - M_PI;
    if(r > (l1 + l2))
        theta2Z = 0;
    if(r < (std::abs(l1 - l2)))
        theta2Z = -M_PI;

    j1->setLocalRotation(AQuaternion(AVector3(0,0,1), theta2Z));
    skeleton.fk();

    double theta1Z = (-l2 * sin(theta2Z)) / r;
    theta1Z = asin(theta1Z);

    double beta = atan2(goalPos.z(), goalPos.x());
    double gamma = asin(goalPos.y() / r);

    AMatrix3 mat;
    mat.fromEulerAnglesYZX(AVector3(0, -beta, gamma));
    AQuaternion finalRootRot = AQuaternion(mat) * AQuaternion(AVector3(0,0,1), theta1Z);
    root->setLocalRotation(finalRootRot);

    skeleton.fk();

    return true;
}
