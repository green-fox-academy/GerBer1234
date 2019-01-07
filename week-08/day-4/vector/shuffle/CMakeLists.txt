cmake_minimum_required(VERSION 3.13)
project(shuffle C)

set(CMAKE_C_STANDARD 99)

add_executable(shuffle main.c vector.c vector.h)