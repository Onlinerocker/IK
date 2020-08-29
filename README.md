# Inverse Kinematics Demos
**Name** \
Gabriel Caldwell

**Structure** \
The code I developed can be found in \
*assignments/a9-ik/ALooker.cpp* \
*libsrc/animation/AIKController-basecode.cpp*.

**Description** \
For this Computer Animation lab I was required to implement an analytical method of IK on a two-link. Additionally, I implemented the looker.

**Originally Created** \
December 9, 2019

**Controls:** \
Left-button drag with the mouse to rotate \
Right-button drag with the mouse to pan \
Middle-button drag with the mouse to zoom \
'Ctrl' + 'Left-click' to move the goal point \
'f' button will focus the view on the character \

**Windows Build Instructions** \
Requirements: CMake, Visual Studio \
* Create new directory named 'build'
* Navigate to this new directory and run 'cmake ..'
* This should build the required files
* Open 'Project.sln' in Visual Studio
* In the Solution Explorer, right click 'INSTALL', then click 'Build'
* You should now have a 'bin' folder in the project's root directory
* Navigate to 'bin/Debug' and run either 'a9-iksimple.exe' or 'a9-looker.exe'
