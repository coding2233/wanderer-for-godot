cmake_minimum_required(VERSION 3.8)

project(wander LANGUAGES C)

set(CMAKE_CXX_STANDARD 17)

include_directories(godot-headers
    wanderer/bin/wanderer-sdk/include())

set(SRC src/wanderer.c)

add_library(${PROJECT_NAME} SHARED ${SRC})