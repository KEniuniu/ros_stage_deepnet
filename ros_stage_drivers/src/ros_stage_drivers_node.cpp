#include <stage.hh>
#include <ros_stage_drivers/Logic.hpp>

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "geometry_msgs/Twist.h"


int main(int argc, char **argv)
{
    ros::init(argc, argv, "ros_stage_drivers_node");
    ros::NodeHandle nh;
    

    Stg::Init(&argc, &argv); // initialize libstage
    Stg::WorldGui world(800, 600, "My Stage simulation");
    world.Load(argv[1]); // load the world file
    
     // create the logic and connect it to the world
    Logic logic;
    logic.connect(&world);
    ros::Subscriber sub = nh.subscribe("/turtle1/cmd_vel", 1000, &Logic::twistCallback, &logic);

    world.Run();

    return 0;
}