/**
* @file landbasedtracked.h
* @authors Group 4
*
* Karan Sutradhar (117037272)
* Sudharsan Balasubramani (116298636)
* Sai Bhamidipati (117023640)
* Ashwin Prabhakaran (117030402)
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
*  This is the header for the LandBasedWheeled class which is a concrete class and inherits
 *  the base class LandBasedRobot and declares the necessary attributes
 *  and method prototypes.
*/

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
        /**
         * @brief it is a pure virtual method that moves the robot up in the maze
         * @param int x_
         * @param int y_
         * @return Returns none
         */
        virtual void GoUp(int x_,int y_) override ;       //--Move the robot up in the maze

        /**
         * @brief it is a pure virtual method that moves the robot down in the maze
         * @param int x_
         * @param int y_
         * @return Returns none
         */
        virtual void GoDown(int x_,int y_) override;     //--Move the robot down in the maze

        /**
         * @brief it is a pure virtual method that turns the robot left in the maze
         * @param int x_
         * @param int y_
         * @return Returns none
         */
        virtual void TurnLeft(int x_, int y_) override;       //--Move the robot left in the maze

        /**
        * @brief it is a pure virtual method that turns the robot right in the maze
        * @param int x_
        * @param int y_
        * @return Returns none
        */
        virtual void TurnRight(int x_, int y_) override;      //--Move the robot right in the maze

        /**
         * @brief it is a pure virtual method that makes the robot pick up an object
         * @param string
         * @return Returns none
         */
        virtual void PickUp(std::string) override;       //--Arm picks up an object

        /**
         * @brief it is a pure virtual method that makes the robot release an object
         * @param string
         * @return Returns none
         */
        virtual void Release(std::string) override;      //--Arm releases an object

    public:
        //--constructor

        /**
         * @brief it is a constructor of the class LandBasedWheeled
         * @param string name_
         * @param int x_
         * @param int y_
         * @return Returns none
         */
        LandBasedWheeled(std::string name_, int x_, int y_): LandBasedRobot(name_, x_, y_){
            name_ =  name_;
            x_ = x_;
            y_ = y_;
        }

        //--destructor
        /**
         * @brief it is a destructor of the class LandBasedWheeled and deletes the objects created
         * @param none
         * @return Returns none
         */
        ~LandBasedWheeled(){}

        };//--Class LandBasedWheel
    }//--namespace RWA3
