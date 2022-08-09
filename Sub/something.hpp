#pragma once
#include "QtQmlIntegration/qqmlintegration.h"
#include <QObject>


class Q_DECL_EXPORT Something : public QObject
{
    Q_OBJECT
    QML_ELEMENT

public:
    Something();
    Q_INVOKABLE void doSomething();
};
