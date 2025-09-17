cmake_minimum_required(VERSION 3.21)

project(simpleffi)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(simpleffi STATIC src/simpleffi.c)

target_include_directories(simpleffi PUBLIC include)