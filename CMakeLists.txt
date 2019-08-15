cmake_minimum_required(VERSION 3.7)
project(sdl_dex_test)

set(CMAKE_CXX_STANDARD 14)

include_directories(include ../sdl-dex/include)

add_executable(sdl_dex_test
        include/Controller1.h
        include/Model1.h
        include/View1.h
        source/Controller1.cpp
        source/main.cpp
        source/Model1.cpp
        source/View1.cpp)

add_custom_target(
        run-linux
        WORKING_DIRECTORY /home/dexter/Coding/switch/sdl-dex-test/
        COMMAND export DEVKITPRO=/opt/devkitpro && make run-linux
)

add_custom_target(
        run
        WORKING_DIRECTORY /home/dexter/Coding/switch/sdl-dex-test/
        COMMAND export DEVKITPRO=/opt/devkitpro && make run
)
