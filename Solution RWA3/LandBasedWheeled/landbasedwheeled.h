//
// Created by Sudo on 4/13/2020.
//

#ifndef SOLUTION_RWA3_LANDBASEDWHEELED_H
#define SOLUTION_RWA3_LANDBASEDWHEELED_H


#include <bits/shared_ptr.h>
#include "../LandBasedRobot/landbasedrobot.h"

namespace rwa3 {
    class LandBasedWheeled : public rwa3::LandBasedRobot {
    protected:
        //--> attributes
        int wheel_number_;
        std::shared_ptr<std::string> wheel_type_;
    public:
        LandBasedWheeled(int wheelNumber);

//--> Methods prototypes
        virtual void GoUp(int x, int y);

        virtual void GoDown(int x, int y);

        virtual void TurnLeft(int x, int y);

        virtual void TurnRight(int x, int y);

        virtual void PickUp(std::string);

        virtual void Release(std::string);
    };//--> class LandBasedWheeled
}//--> namespace rwa3

#endif //SOLUTION_RWA3_LANDBASEDWHEELED_H
