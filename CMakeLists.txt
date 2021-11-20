cmake_minimum_required(VERSION 3.20)
project(logger C)

set(CMAKE_C_STANDARD 99)

if (NOT TARGET COMiC::os)
    add_subdirectory(os)
endif ()