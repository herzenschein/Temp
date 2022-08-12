# Dependencies
find_package(Qt6 6.2 COMPONENTS Core Quick REQUIRED)

# Qml-Module
qt6_add_qml_module(something
    URI TestApp.Models
    VERSION 1.0
    STATIC
    SOURCES
        something.cpp
        something.hpp
)


target_link_libraries(something
                    PRIVATE
                        Qt6::Core
                        Qt6::Quick
)
