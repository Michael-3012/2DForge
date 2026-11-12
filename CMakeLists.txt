cmake_minimum_required(VERSION 3.28)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(
    2DForge
    LANGUAGES CXX
)

add_executable(2DForge)
target_sources(2DForge
    PRIVATE
        src/main.cpp
)



