cmake_minimum_required(VERSION 3.27)
project(
    $app_name
    VERSION 1.0 # app_version
    DESCRIPTION "$app_description"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Release)
# set(CMAKE_BUILD_TYPE Debug)

add_executable($app_name_or_executable_name) # build executable
# add_library($app_name_or_lib_name SHARED) # build dynamic library
# add_library($app_name_or_lib_name) # build static library

set(sources
    main.cpp
)

target_sources($app_name_or_executable_name PRIVATE ${sources})
