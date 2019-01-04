cmake_minimum_required(VERSION 3.13)
project(create_vector C)

set(CMAKE_C_STANDARD 99)

add_executable(create_vector main.c vector.h vector.c)