cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}-std=c++14")

project(singleton)

add_executable(
    singleton_exe
    main.cpp
    singleton.cpp
)