cmake_minimum_required(VERSION 3.12)
project(DOJO)

set(CMAKE_CXX_STANDARD 14)

add_executable(Dojo_run main.cpp)

include_directories(Dojo)
add_subdirectory(Dojo)
add_subdirectory(Dojo_test)

target_link_libraries(Dojo_run Dojo)