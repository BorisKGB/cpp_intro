cmake_minimum_required(VERSION 3.27)
project(
    hello_app
    VERSION 1.0
    DESCRIPTION "Hello world app"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Release)

add_executable(hello_app) # build executable
# add_library(hello_app SHARED) # build dynamic library
# add_library(hello_app) # build static library

set(sources
    main.cpp
)

target_sources(hello_app PRIVATE ${sources})
