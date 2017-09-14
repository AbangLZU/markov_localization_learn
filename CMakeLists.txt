cmake_minimum_required(VERSION 3.8)
project(markov_localization_learn)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(markov_localization_learn ${SOURCE_FILES})