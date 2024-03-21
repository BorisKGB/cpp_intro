cmake_minimum_required(VERSION 3.27)
project(
    fib
    VERSION 1.0
    DESCRIPTION "First 5 fib numbers"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Release)

add_executable(fib) # build executable

set(sources
    main.cpp
)

target_sources(fib PRIVATE ${sources})
