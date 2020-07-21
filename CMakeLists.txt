cmake_minimum_required(VERSION 3.7)

project(SDLGameEngineTutorial)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDLGameEngineTutorial main.cpp)
target_link_libraries(SDLGameEngineTutorial ${SDL2_LIBRARIES})
