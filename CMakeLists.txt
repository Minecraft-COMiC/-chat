cmake_minimum_required(VERSION 3.20)
project(logger C)

set(CMAKE_C_STANDARD 99)

if (NOT TARGET COMiC::os)
    add_subdirectory(os)
endif ()

add_library(
        logger
        SHARED

        src/init.c
)

target_link_libraries(logger PUBLIC COMiC::os)
target_include_directories(logger PUBLIC include)
set_target_properties(logger PROPERTIES LINKER_LANGUAGE C)

add_library(COMiC::logger ALIAS logger)