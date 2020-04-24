/**
* @file landbasedrobot.h
* @authors Group 4
*
* Karan Sutradhar (117037272)
* Sudharsan Balasubramani (116298636)
* Sai Bhamidipati
* Ashwin Prabhakaran
* Girish Ethirajan
*
* @version 1.0
*
* @section LICENSE
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* @section DESCRIPTION
*
*  This is an abstract class implementation and two different derived classes
*  (landbasedtracked and landbasedwheeled) share the attributes
*  and methods of this base class
*/

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

        /**
         * @brief it is a pure virtual method that moves the robot up in the maze
         * @param int x_
         * @param int y_
         * @return Returns none
         */
        virtual void GoUp(int x_,int y_) = 0 ;       //--Move the robot up in the maze

        /**
         * @brief it is a pure virtual method that moves the robot down in the maze
         * @param int x_
         * @param int y_
         * @return Returns none
         */
        virtual void GoDown(int x_,int y_) = 0;     //--Move the robot down in the maze

        /**
         * @brief it is a pure virtual method that turns the robot left in the maze
         * @param int x_
         * @param int y_
         * @return Returns none
         */
        virtual void TurnLeft(int x_, int y_) = 0;       //--Move the robot left in the maze

        /**
         * @brief it is a pure virtual method that turns the robot right in the maze
         * @param int x_
         * @param int y_
         * @return Returns none
         */
        virtual void TurnRight(int x_, int y_) = 0;      //--Move the robot right in the maze

        /**
         * @brief it is a pure virtual method that makes the robot pick up an object
         * @param string
         * @return Returns none
         */
        virtual void PickUp(std::string) = 0;       //--Arm picks up an object

        /**
         * @brief it is a pure virtual method that makes the robot release an object
         * @param string
         * @return Returns none
         */
        virtual void Release(std::string) = 0;      //--Arm releases an object

    public:
        //--constructor

        /**
         * @brief it is a constructor of the class LandBasedRobot
         * @param string name_
         * @param int x_
         * @param int y_
         * @return Returns none
         */
        LandBasedRobot(std::string name, int x, int y){
            name_ =  name;
            x_ = x;
            y_ = y;
        }

        //--destructor

        /**
         * @brief it is a destructor of the class landbasedrobot and deletes the objects created
         * @param none
         * @return Returns none
         */
        ~LandBasedRobot(){}

    public:
    //--mutators

        /**
         * @brief it is a setter method for the x-axis
         * @param int x_
         * @return Returns none
         */
        void set_x_(int x_){
            x_ = x_;
        }

        /**
         * @brief it is a setter method for the y-axis
         * @param int y_
         * @return Returns none
         */
        void set_y_(int y_){
            y_ = y_;
        }


    //--accessors

        /**
         * @brief it is a getter method for the x-axis
         * @param none
         * @return Returns int x_
         */
        int get_x_() const{
            return x_;
        }

        /**
         * @brief it is a getter method for the y-axis
         * @param none
         * @return Returns int y_
         */
        int get_y_() const{
            return y_;
        }
    };//--Class LandBasedRobot
}//--namespace RWA3