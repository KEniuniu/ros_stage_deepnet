#ifndef LOGIC_H
#define LOGIC_H

#include <stage.hh>
#include <ros_stage_drivers/Robot.hpp>

#include "geometry_msgs/Twist.h"

class Logic
{
public:
    Logic()
    {
        cmd_vel_.linear.x = 0;
        cmd_vel_.angular.z = 0;
    }

    ~Logic()
    {
        
    }

    static int Callback(Stg::World* world, void* userarg);
    void connect(Stg::World* world);
    void Tick(Stg::World*);
    void twistCallback(const geometry_msgs::Twist::ConstPtr& msg);
    
protected:
    Robot robot_;
    geometry_msgs::Twist cmd_vel_;
};

#endif