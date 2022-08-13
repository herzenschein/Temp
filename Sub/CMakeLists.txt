# This, paired with QML_ELEMENT, is what does all the magic.
qt_add_qml_module(something
    URI "TestApp.Models"
    VERSION 1.0
    SOURCES
        "something.cpp"
        "something.hpp"
    SHARED
)

# No need for target_link_libraries for the target generated here.
# The one in the root CMakeLists.txt gets propagated to this and other subdirectories.
# Also, QtCore is a dependency of QtQuick, so specifying that is optional.
