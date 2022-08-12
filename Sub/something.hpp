#pragma once
#include "QtQmlIntegration/qqmlintegration.h"
#include <QObject>


class Something : public QObject
{
    Q_OBJECT
    QML_ELEMENT

public:
    Something();
    Q_INVOKABLE void doSomething();
};
