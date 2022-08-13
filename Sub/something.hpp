#pragma once
#include <QObject>
#include "QtQmlIntegration/qqmlintegration.h"

class Q_DECL_EXPORT Something : public QObject
{
    Q_OBJECT
    QML_ELEMENT

public:
    // No need for the constructor
    // if you're not going to use it yet, see "rule of zero".
    Q_INVOKABLE void doSomething();
};
