cmake_minimum_required(VERSION 3.20)

project(testApp VERSION 1.0 LANGUAGES CXX)

# First use find_package to use the new Qt CMake API.
find_package(Qt6 REQUIRED COMPONENTS Quick)

# This takes care of AUTOUIC, AUTOMOC, AUTORCC etc.
qt_standard_project_setup()

# AUTORCC is still needed because your resource was made manually instead of via qt_add_qml_module.
# If you use qt_add_qml_module + qt_standard_project_setup, you don't need this.
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# This generates your main target executable.
# If you use qt_add_qml_module, you don't need to specify sources.qrc here.
qt_add_executable(${PROJECT_NAME}
    main.cpp
    sources.qrc
)

# This generates the following path:
# qrc:/Main/main.qml
# You can load it in your main.cpp with engine.load().
#qt_add_qml_module(${PROJECT_NAME}
#    URI "Main"
#    VERSION 1.0
#    QML_FILES "main.qml"
#)

target_compile_definitions(${PROJECT_NAME}
    PRIVATE
    $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)

# As Morten242 mentioned, the qt_add_library step
# autogenerates a plugin which can be linked to.
# This step specifically links to the executable target you set in qt_add_executable.
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Quick somethingplugin)

# No need for target_include_directories because you don't have an include directory yet.

add_subdirectory(Sub)
