cmake_minimum_required(VERSION 3.7)

project(SDL2Template)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDL2Template main.cpp)
target_link_libraries(SDL2Template)
