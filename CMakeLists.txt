cmake_minimum_required(VERSION 3.22)
project(RubicsCubeSolver)

set(CMAKE_CXX_STANDARD 17)

add_executable(RubicsCubeSolver main.cpp Model/RubiksCube.cpp Model/RubiksCube.h Model/RubiksCube1dArray.cpp Model/RubiksCube3dArray.cpp)
