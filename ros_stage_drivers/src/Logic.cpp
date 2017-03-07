#include <ros_stage_drivers/Logic.hpp>
#include "ros/ros.h"

int Logic::Callback(Stg::World* world, void* userarg)
{
    Logic* lg = reinterpret_cast<Logic*>(userarg);
    
    lg->Tick(world);
    
    // never remove this call-back
    return 0;
}


void Logic::connect(Stg::World* world)
{
    // get the robot's model and subscribe to it
    Stg::ModelPosition* posmod = reinterpret_cast<Stg::ModelPosition*>(
        world->GetModel("r0")
    );
    assert(posmod != 0);
    
    robot_.position = posmod;
    robot_.position->Subscribe();
    
    // get the robot_'s ranger model and subscribe to it
    Stg::ModelRanger* rngmod = reinterpret_cast<Stg::ModelRanger*>(
        robot_.position->GetChild( "ranger:0" )
    );
    assert(rngmod != 0);
    
    robot_.ranger = rngmod;
    robot_.ranger->Subscribe();
    
    
    // register with the world
    world->AddUpdateCallback(Logic::Callback, reinterpret_cast<void*>(this));    
}


void Logic::Tick(Stg::World*)
{

    ros::spinOnce();
    robot_.position->SetSpeed( cmd_vel_.linear.x, 0, cmd_vel_.angular.z );
}

void Logic::twistCallback(const geometry_msgs::Twist::ConstPtr& msg)
{
  cmd_vel_ = *msg;
}