cmake_minimum_required(VERSION 3.10.2)
project(MagicSquare)

set(CMAKE_CXX_STANDARD 14)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(MagicSquare src/Ramanujan-Magic-Square.cpp)
add_executable(Testing test/MagicSquare_Test.cpp)
target_link_libraries(Testing ${GTEST_LIBRARIES} pthread)
