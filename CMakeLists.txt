cmake_minimum_required(VERSION 3.8)
project(markov_localization_learn)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp help_functions.h measurement_package.h map.h bayesianFilter.cpp bayesianFilter.h)
add_executable(markov_localization_learn ${SOURCE_FILES})