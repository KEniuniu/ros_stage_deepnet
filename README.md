## ABOUT

Deep Learning (CMPT 880) course project

## Setup

1. Have ROS installed.
2. Install stage

        sudo apt-get install ros-indigo-stage
2. Install catkin-tools

        sudo apt-get install python-catkin-tools
3. Create a clean catkin workspace.

        mkdir -p $HOME/workspace/ros/$ROS_DISTRO/880/src
        cd $HOME/workspace/ros/$ROS_DISTRO/880_project        
4. Check that the workspace is clean ( only Extending what we expect... nothing )

        catkin config        
5. Init the workspace

        catkin init
        cd src
6. Clone the repository
        git clone https://github.com/rakeshshrestha31/ros_stage_deepnet.git
8. Build

        catkin build

## Run

1. Ensure your workspace is sourced:
    
        source $HOME/workspace/ros/$ROS_DISTRO/880_project/devel.`basename $SHELL`
2. Run

        rosrun ros_stage_drivers ros_stage_drivers_node
    