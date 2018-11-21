cmake_minimum_required(VERSION 3.12)
project(flyable)

set(CMAKE_CXX_STANDARD 14)

add_executable(flyable main.cpp Flyable.cpp Flyable.h Vehicle.cpp Vehicle.h Helicopter.cpp Helicopter.h Bird.cpp Bird.h Animal.cpp Animal.h)