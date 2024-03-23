cmake_minimum_required(VERSION 3.27)
project(
    basics
    VERSION 1.0 # app_version
    DESCRIPTION "basic code actions"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_TYPE Debug)

add_executable(0_comments)
add_executable(1_doxygen)

set(comment_sources
    0_comments.cpp
)
set(doxygen_sources
    1_doxygen.cpp
)

target_sources(0_comments PRIVATE ${comment_sources})
target_sources(1_doxygen PRIVATE ${doxygen_sources})
