import QtQuick
import QtQuick.Controls

import TestApp.Models

ApplicationWindow
{
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    // You need to instantiate it first.
    Something {
        id: something
    }

    Button {
        anchors.centerIn: parent
        text: "This will do something."

        onClicked: {
            something.doSomething()
        }
    }
}
