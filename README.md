# Inverse Kinematics Demos
**Name** \
Gabriel Caldwell

**Structure** \
My Computer Animation course required us to develop key animation library features, and implement those features in applications. Application specific code can be found in *assignments* and library code can be found in *libsrc/animation*.

Project dependencies are located in *3rdparty*. You shouldn't need to touch these.

The code I developed for IK demos can be found in \
*assignments/a9-ik/ALooker.cpp* \
*libsrc/animation/AIKController-basecode.cpp*.

**Description** \
For this Computer Animation lab I was required to implement an analytical method of IK on a two-link. Additionally, I implemented which enables a skeleton to "look at" a moving target point.

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
* Navigate to this new directory and run 'cmake ..'
* This should build the required files
* Open 'build/Project.sln' in Visual Studio
* In the Solution Explorer, right click 'INSTALL', then click 'Build'
* You should now have a 'bin' folder in the project's root directory
* Navigate to 'bin/Debug' and run either 'a9-iksimple.exe' or 'a9-looker.exe'
