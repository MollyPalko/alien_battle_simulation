cmake_minimum_required(VERSION 3.16)
project(AlienBattleSim)

# Set C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(header)

# Source files
file(GLOB_RECURSE SOURCES "source/*.cpp")

# Executable target
add_executable(sim ${SOURCES})

