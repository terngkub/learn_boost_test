cmake_minimum_required(VERSION 3.10)
project(computor)

enable_testing()

SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED true)

find_package(Boost)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    
    add_executable(complex_test
        complex_test.cpp
        complex.cpp
        complex.hpp
    )

    add_test(NAME complex_test COMMAND complex_test)
endif()
