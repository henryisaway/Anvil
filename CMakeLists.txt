cmake_minimum_required(VERSION 3.15)
project(anvil)
cmake_policy(SET CMP0072 NEW)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic")

# Includes
include_directories(${CMAKE_SOURCE_DIR}/include)

# Automatically find all source files in the src directory
file(GLOB_RECURSE APP_SOURCES "src/*.c")

# Add executable
add_executable(anvil
    ${APP_SOURCES}
)