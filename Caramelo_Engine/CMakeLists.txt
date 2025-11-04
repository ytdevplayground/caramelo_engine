cmake_minimum_required(VERSION 3.27)

project(Caramelo_Engine
        LANGUAGES C CXX)

SET(CMAKE_CXX_STANDARD 20)

include_directories(src/application)

add_library(Caramelo STATIC src/Application/Application.cpp
                            src/Application/main.cpp)

target_include_directories(Caramelo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src) 