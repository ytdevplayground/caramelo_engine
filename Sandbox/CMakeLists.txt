cmake_minimum_required(VERSION 3.27)

project(Caramelo_Engine
        LANGUAGES C CXX)

SET(CMAKE_CXX_STANDARD 20)

set(SANDBOX src/Sandbox.cpp)

add_executable(${PROJECT_NAME} ${SANDBOX})
target_link_libraries(${PROJECT_NAME} PUBLIC Caramelo)