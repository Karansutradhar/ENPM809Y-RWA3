//
// Created by karan on 4/23/20.
//

#pragma once
#include <string>
#include<iostream>

namespace RWA3 {
    class LandBasedRobot {

    protected:
        //--attributes
        std::string name_;      //--Name of the robot
        double speed_;      //--Driving speed of the robot
        double width_;      //--Width of the base of the robot
        double length_;     //--Length of the base of the robot
        double height_;     //--Height of the base of the robot
        double capacity_;      //--Payload of the arm
        int x_;     //--X coordinate of the robot in the maze
        int y_;     //--Y coordinate of the robot in the maze

    public:
        //--methods prototypes
        virtual void GoUp(int x_,int y_) = 0 ;       //--Move the robot up in the maze
        virtual void GoDown(int x_,int y_) = 0;     //--Move the robot down in the maze
        virtual void TurnLeft(int x_, int y_) = 0;       //--Move the robot left in the maze
        virtual void TurnRight(int x_, int y_) = 0;      //--Move the robot right in the maze
        virtual void PickUp(std::string) = 0;       //--Arm picks up an object
        virtual void Release(std::string) = 0;      //--Arm releases an object

    };//--Class LandBasedRobot
}//--namespace RWA3