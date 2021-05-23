cmake_minimum_required(VERSION 3.8)

project(wander LANGUAGES C)

set(CMAKE_CXX_STANDARD 17)

include_directories(godot-headers)

set(SRC src/wanderer.c)

message("${CMAKE_BUILD_RPATH}")

message("${CMAKE_CURRENT_BINARY_DIR}")


add_library(${PROJECT_NAME} SHARED ${SRC})