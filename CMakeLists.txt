cmake_minimum_required(VERSION 3.8)
project(persistente_werte)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        persistent.h)

add_executable(persistente_werte ${SOURCE_FILES})