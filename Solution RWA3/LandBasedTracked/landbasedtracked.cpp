//
// Created by Sudo on 4/13/2020.
//

#include <iostream>
#include "landbasedtracked.h"

void rwa3::LandBasedTracked::GoUp(int x, int y) {
    std::cout<<"LandBasedTracked::GoUp is called\n";
}

void rwa3::LandBasedTracked::GoDown(int x, int y) {
    std::cout<<"LandBasedTracked::GoDown is called\n";
}

void rwa3::LandBasedTracked::TurnLeft(int x, int y) {
    std::cout<<"LandBasedTracked::TurnLeft is called\n";
}

void rwa3::LandBasedTracked::TurnRight(int x, int y) {
    std::cout<<"LandBasedTracked::TurnRight is called\n";
}

void rwa3::LandBasedTracked::PickUp(std::string) {
    std::cout<<"LandBasedTracked::PickUp is called\n";
}

void rwa3::LandBasedTracked::Release(std::string) {
    std::cout<<"LandBasedTracked::Release is called\n";
}

