cmake_minimum_required(VERSION 3.13)
project(capacity C)

set(CMAKE_C_STANDARD 99)

add_executable(capacity main.c vector.c vector.h)