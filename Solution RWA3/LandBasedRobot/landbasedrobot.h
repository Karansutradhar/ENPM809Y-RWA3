//
// Created by Sudo on 4/13/2020.
//

#ifndef SOLUTION_RWA3_LANDBASEDROBOT_H
#define SOLUTION_RWA3_LANDBASEDROBOT_H

#include <string>

namespace rwa3 {
    class LandBasedRobot {
    protected:
        //--> Attributes
        std::string name_;
        double speed_;
        double width_;
        double length_;
        double height_;
        double capacity_;
        int x_;
        int y_;

    public:
        LandBasedRobot();

//--> Methods prototypes
        virtual void GoUp(int x, int y);

        virtual void GoDown(int x, int y);

        virtual void TurnLeft(int x, int y);

        virtual void TurnRight(int x, int y);

        virtual void PickUp(std::string);

        virtual void Release(std::string);

    }; //--> class LandBasedRobot
}//--> namespace rwa3


#endif //SOLUTION_RWA3_LANDBASEDROBOT_H
