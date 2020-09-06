# Inverse Kinematics Demos
**Name** \
Gabriel Caldwell

**Structure** \
During my Computer Animation course I developed key animation library features, and implemented those features into various applications. Application specific code can be found in *assignments* and library code can be found in *libsrc/animation*.

Project dependencies are located in *3rdparty*. You shouldn't need to touch these.

The code I developed for IK demos can be found in:
* *assignments/a9-ik/ALooker.cpp*
* *libsrc/animation/AIKController-basecode.cpp*
* *libsrc/animation/AJoint-basecode.cpp*
* *libsrc/animation/AMatrix3-basecode.cpp*
* *libsrc/animation/AQuaternion-basecode.cpp*


**The Functions I developed:** \
\
*ALooker*
* lookAtTarget

*AIKController-basecode*
* solveIKTwoLink*

*AJoint-basecode*
* fk (Called by *skeleton.fk*) 

*AMatrix3-basecode*
* fromEulerAnglesYZX

*AQuaternion-basecode*
* fromMatrix (used in *AQuaternion* constructor)
* fromAxisAngle (used in *AQuaternion* constructor)

**Description** \
I implemented an analytical method of IK on a two-link. Additionally, I developed a function which enables a skeleton to "look at" a moving target point.

**Originally Created** \
December 9, 2019

**Controls:** \
Left-button drag with the mouse to rotate \
Right-button drag with the mouse to pan \
Middle-button drag with the mouse to zoom \
'Ctrl' + 'Left-click' to move the goal point \
'f' button will focus the view on the character \

**Windows Build Instructions** \
Requirements: CMake, Visual Studio
* Create new directory named 'build' in the project's root directory
* Navigate to this new directory and run 'cmake -A Win32 ..'
* This should build the required files
* Open 'build/Project.sln' in Visual Studio
* In the Solution Explorer, right click 'INSTALL', then click 'Build'
* You should now have a 'bin' folder in the project's root directory
* Navigate to 'bin/Debug' and run either 'a9-iksimple.exe' or 'a9-looker.exe'
