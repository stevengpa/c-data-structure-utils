cmake_minimum_required(VERSION 4.0)
project(c_data_structure_utils C)

set(CMAKE_C_STANDARD 23)

include_directories(include)

add_executable(c_data_structure_utils
        include/road_string.h
        src/road_string.c
        src/main.c
        src/road_string_split.c
        include/road_string_split.h)
