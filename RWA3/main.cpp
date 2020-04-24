/**
* @file landbasedtracked.h
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
*  This is main.cpp the project implementation file a.k.a source file.
*/

#include "LandBasedWheeled/landbasedwheeled.h"
#include "LandBasedTracked/landbasedtracked.h"
#include <vector>
#include <memory>
#include <iostream>
#include <string>

//--prototype
/**
 * @brief  ***********
 * @param std::shared_ptr<RWA3::LandBasedRobot> robot
 * @param const std::vector<std::string> &vec
 * @param std::string obj
 * @return Returns none
 */
void FollowActionPath(std::shared_ptr<RWA3::LandBasedRobot> robot,
                      const std::vector<std::string> &vec, std::string obj);
//--Implementation
void FollowActionPath(std::shared_ptr<RWA3::LandBasedRobot> robot,
                      const std::vector<std::string> &vec,std::string obj){

    int x{robot->get_x_()};//--should be 1 for wheeled and 2 for tracked
    int y{robot->get_y_()};//--should be 4 for wheeled and 3 for tracked
    for (auto s: vec){
        if (s.compare("up")==0)
            robot->GoUp(x,y);
        else if (s.compare("down")==0)
            robot->GoDown(x,y);
        else if (s.compare("right")==0)
            robot->TurnRight(x,y);
        else if (s.compare("left")==0)
            robot->TurnLeft(x,y);
        else if (s.compare("pickup")==0)
            robot->PickUp(obj);
        else if (s.compare("release")==0)
            robot->Release(obj);
    }
}

int main(){

//--the following should throw an error since LandBasedRobot is an abstract class
//rwa3::LandBasedRobot base_robot("none",1,2);
//--pointer to base class for dynamic binding
    std::shared_ptr<RWA3::LandBasedRobot> wheeled = std::make_shared<RWA3::LandBasedWheeled>("Husky",1,4);
    std::vector<std::string> action_path_wheeled {"up","right","pickup","left","down","release"};
    FollowActionPath(wheeled,action_path_wheeled,"book");
    std::cout << "--------------------------------------------------------------------\n";

//--pointer to base class for dynamic binding
    std::shared_ptr<RWA3::LandBasedRobot> tracked = std::make_shared<RWA3::LandBasedTracked>("LT2-F",2,3);
    std::vector<std::string> action_path_tracked {"up","left","pickup","down","right","release"};
    FollowActionPath(tracked,action_path_tracked,"cube");
    return 0;
}
