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

set(BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build")
file(MAKE_DIRECTORY ${BUILD_DIR})

add_executable(app)

set(app_src
    main.cpp
)

set_property(TARGET ${APP_NAME} PROPERTY RUNTIME_OUTPUT_DIRECTORY ${BUILD_DIR})

target_sources(app PRIVATE ${app_src})
