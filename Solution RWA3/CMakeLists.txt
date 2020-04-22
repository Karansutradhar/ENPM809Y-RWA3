cmake_minimum_required(VERSION 3.10)
project(Solution_RWA3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Solution_RWA3 main.cpp LandBasedRobot/landbasedrobot.cpp LandBasedRobot/landbasedrobot.h LandBasedTracked/landbasedtracked.cpp LandBasedTracked/landbasedtracked.h LandBasedWheeled/landbasedwheeled.cpp LandBasedWheeled/landbasedwheeled.h)