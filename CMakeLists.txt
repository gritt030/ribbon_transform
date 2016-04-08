cmake_minimum_required(VERSION 2.6)
project(ribbon_transform)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -std=c++11 -pg")

add_executable(transform main.cpp)

install(TARGETS transform RUNTIME DESTINATION bin)

add_subdirectory(hough)
add_subdirectory(ribbon)
add_subdirectory(pngwriter)

target_link_libraries(transform png_writer -lpng -lz)
