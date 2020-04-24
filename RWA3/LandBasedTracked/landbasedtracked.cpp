/**
* @file landbasedtracked.cpp
* @authors Group 4
*
* Karan Sutradhar (117037272)
* Sudharsan Balasubramani (116298636)
* Sai Bhamidipati (117023640)
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
*  This is implementation for the LandBasedTracked class methods.
*/

#include "landbasedtracked.h"

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::GoUp() method to move the robot up in the maze
 * @param int x_
 * @param int y_
 * @return Returns none
 */
void RWA3::LandBasedTracked::GoUp(int x_, int y_) {
    std::cout << "LandBasedTracked::GoUp is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::GoDown() method to move the robot down in the maze
 * @param int x_
 * @param int y_
 * @return Returns none
 */
void RWA3::LandBasedTracked::GoDown(int x_, int y_) {
    std::cout << "LandBasedTracked::GoDown is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::TurnLeft() method to move the robot Turn Left in the maze
 * @param int x_
 * @param int y_
 * @return Returns none
 */
void RWA3::LandBasedTracked::TurnLeft(int x_, int y_) {
    std::cout << "LandBasedTracked::TurnLeft is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::TurnRight() method to move the robot Turn Right in the maze
 * @param int x_
 * @param int y_
 * @return Returns none
 */
void RWA3::LandBasedTracked::TurnRight(int x_, int y_) {
    std::cout << "LandBasedTracked::TurnRight is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::PickUp() method to make the robot pick up an object
 * @param string
 * @return Returns none
 */
void RWA3::LandBasedTracked::PickUp(std::string) {
    std::cout << "LandBasedTracked::PickUp is called\n";
}

/**
 * @brief it is the implementation of  RWA3::LandBasedTracked::Release() method to make the robot release an object
 * @param string
 * @return Returns none
 */
void RWA3::LandBasedTracked::Release(std::string) {
    std::cout << "LandBasedTracked::Release is called\n";
}
