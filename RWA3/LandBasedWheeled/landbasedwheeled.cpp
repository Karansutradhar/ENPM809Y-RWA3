/**
* @file landbasedtracked.cpp
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
*  This is implementation for the LandBasedWheeled class methods.
*/

#include "landbasedwheeled.h"

/**
 * @brief it is the implementation of  RWA3::LandBasedWheeled::GoUp() method to move the robot up in the maze
 * @param int x_
 * @param int y_
 * @return Returns none
 */
void RWA3::LandBasedWheeled::GoUp(int x_, int y_) {
    std::cout << "LandBasedWheeled::GoUp is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedWheeled::GoDown() method to move the robot down in the maze
 * @param int x_
 * @param int y_
 * @return Returns none
 */
void RWA3::LandBasedWheeled::GoDown(int x_, int y_) {
    std::cout << "LandBasedWheeled::GoDown is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::TurnLeft() method to move the robot Turn Left in the maze
 * @param int x_
 * @param int y_
 * @return Returns none
 */
void RWA3::LandBasedWheeled::TurnLeft(int x_, int y_) {
    std::cout << "LandBasedWheeled::TurnLeft is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::TurnRight() method to move the robot Turn Right in the maze
 * @param int x_
 * @param int y_
 * @return Returns none
 */
void RWA3::LandBasedWheeled::TurnRight(int x_, int y_) {
    std::cout << "LandBasedWheeled::TurnRight is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::PickUp() method to make the robot pick up an object
 * @param string
 * @return Returns none
 */
void RWA3::LandBasedWheeled::PickUp(std::string) {
    std::cout << "LandBasedWheeled::PickUp is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::Release() method to make the robot release an object
 * @param string
 * @return Returns none
 */
void RWA3::LandBasedWheeled::Release(std::string) {
    std::cout << "LandBasedWheeled::Release is called\n";
}
