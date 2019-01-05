cmake_minimum_required(VERSION 3.13)
project(unique C)

set(CMAKE_C_STANDARD 99)

add_executable(unique main.c vector.c vector.h)