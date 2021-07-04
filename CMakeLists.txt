cmake_minimum_required(VERSION 3.7)

project(SDL2Template)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

FILE(GLOB_RECURSE SOURCES src/*.cpp
                          src/*.h
)

add_executable(SDL2Template ${SOURCES})
target_link_libraries(SDL2Template ${SDL2_LIBRARIES} SDL2_image)
