cmake_minimum_required(VERSION 3.23)
project(rkb_native)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "../bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "../bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin")

add_subdirectory(rkb)
add_subdirectory(rkb-app)
