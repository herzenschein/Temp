cmake_minimum_required(VERSION 3.20)

project(Testing VERSION 1.0 LANGUAGES CXX)



# Qt
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)



# Language
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)



# Dependencies
find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

add_subdirectory(Sub/)



# Build
qt_add_executable(appTesting
    sources.qrc
    main.cpp
)

target_compile_definitions(appTesting
                PRIVATE
                        $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>
)

target_link_libraries(appTesting
                PUBLIC
                    something
                    Qt6::Quick
)
target_include_directories(appTesting
                PUBLIC
                    Sub/
)
