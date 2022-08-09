cmake_minimum_required(VERSION 3.16)


# Qt
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)


# Language
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


# Dependencies
find_package(Qt6 6.2 COMPONENTS Core Quick REQUIRED)



add_library(something SHARED
                    something.cpp
                    something.hpp
)

target_link_libraries(something
                    PRIVATE
                        Qt6::Core
                        Qt6::Quick
)


# Qml-Module
qt_add_qml_module(something
  URI "TestApp.Models"
  VERSION 1.0
)
