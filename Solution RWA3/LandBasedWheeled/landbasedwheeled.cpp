//
// Created by Sudo on 4/13/2020.
//

#include <iostream>
#include "landbasedwheeled.h"

void rwa3::LandBasedWheeled::GoUp(int x, int y) {
    std::cout<<"LandBasedWheeled::GoUp is called\n";
}

void rwa3::LandBasedWheeled::GoDown(int x, int y) {
    std::cout<<"LandBasedWheeled::GoDown is called\n";
}

void rwa3::LandBasedWheeled::TurnLeft(int x, int y) {
    std::cout<<"LandBasedWheeled::TurnLeft is called\n";
}

void rwa3::LandBasedWheeled::TurnRight(int x, int y) {
    std::cout<<"LandBasedWheeled::TurnRight is called\n";
}

void rwa3::LandBasedWheeled::PickUp(std::string) {
    std::cout<<"LandBasedWheeled::PickUp is called\n";
}

void rwa3::LandBasedWheeled::Release(std::string) {
    std::cout<<"LandBasedWheeled::Release is called\n";
}

