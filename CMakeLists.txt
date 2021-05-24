cmake_minimum_required(VERSION 3.8)

project(wanderer LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set( CMAKE_EXPORT_COMPILE_COMMANDS 1 )

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread" )

include_directories(godot-headers
    wanderer/bin/wanderer-sdk/include
    wanderer/bin/wanderer-sdk/include/sdk)

set(SRC src/wanderer.c)

add_library(${PROJECT_NAME} SHARED ${SRC})

