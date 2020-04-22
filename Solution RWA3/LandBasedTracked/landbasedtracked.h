//
// Created by Sudo on 4/13/2020.
//

#ifndef SOLUTION_RWA3_LANDBASEDTRACKED_H
#define SOLUTION_RWA3_LANDBASEDTRACKED_H


#include <bits/shared_ptr.h>
#include "../LandBasedRobot/landbasedrobot.h"

namespace rwa3 {
    class LandBasedTracked : public rwa3::LandBasedRobot {
    protected:
        std::shared_ptr<std::string> track_type_;

    public:
        LandBasedTracked();


//--> Methods prototypes
        virtual void GoUp(int x, int y);

        virtual void GoDown(int x, int y);

        virtual void TurnLeft(int x, int y);

        virtual void TurnRight(int x, int y);

        virtual void PickUp(std::string);

        virtual void Release(std::string);
    };//--> class LandBasedTracked
}//--> namespace rwa3


#endif //SOLUTION_RWA3_LANDBASEDTRACKED_H
