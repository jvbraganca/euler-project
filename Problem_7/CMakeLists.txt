cmake_minimum_required(VERSION 3.17)
project(Problem_7)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++14 -ggdb")
set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Problem_7
        main.cpp)
