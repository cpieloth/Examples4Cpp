##
# General CMake settings
#
cmake_minimum_required(VERSION 2.8.12)
project(Examples4Cpp)
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

# Enable testing with CTest
include(CTest)


##
# Compiler Settings
#
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif(NOT CMAKE_BUILD_TYPE)

##
# Directories
#
add_subdirectory(${PROJECT_SOURCE_DIR}/doc)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)