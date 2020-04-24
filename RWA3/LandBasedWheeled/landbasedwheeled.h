//
// Created by karan on 4/23/20.
//

#pragma once
#include <string>
#include<iostream>
#include "../LandBasedRobot/landbasedrobot.h"

namespace RWA3 {
    class LandBasedWheeled : public LandBasedRobot {
    protected:
        //--attributes
        int wheel_number_;      //--Number of wheels mounted on the robot
        std::string *wheel_type_;       //--Type of wheels mounted on the robot

    public:
        //--methods prototypes
        virtual void GoUp(int x_,int y_) override ;       //--Move the robot up in the maze
        virtual void GoDown(int x_,int y_) override;     //--Move the robot down in the maze
        virtual void TurnLeft(int x_, int y_) override;       //--Move the robot left in the maze
        virtual void TurnRight(int x_, int y_) override;      //--Move the robot right in the maze
        virtual void PickUp(std::string) override;       //--Arm picks up an object
        virtual void Release(std::string) override;      //--Arm releases an object

    public:
        //--constructor
        LandBasedWheeled(std::string name_, int x_, int y_): LandBasedRobot(name_, x_, y_){
            name_ =  name_;
            x_ = x_;
            y_ = y_;
        }
        //--destructor
        ~LandBasedWheeled(){}

        };//--Class LandBasedWheel
    }//--namespace RWA3