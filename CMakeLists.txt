cmake_minimum_required(VERSION 3.10)
project(aguaje)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc -static-libstdc++")

add_subdirectory(common)
add_subdirectory(animales)
add_subdirectory(paises)
add_subdirectory(workflow)

add_executable(aguaje main.cpp)
target_link_libraries(aguaje flow)
