cmake_minimum_required(VERSION 3.28)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(
    2DForge
    LANGUAGES CXX
)

add_executable(2DForge)

find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(2DForge
    PRIVATE
    $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
    $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)

target_sources(2DForge
    PRIVATE
        src/main.cpp
)



