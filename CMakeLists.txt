cmake_minimum_required(VERSION 3.20)
project(DataMaker)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataMaker DataMaker.cpp ACCode.cpp Random.cpp In.cpp)
