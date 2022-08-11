#pragma once
#include "librum_global.hpp"
#include "QtQmlIntegration/qqmlintegration.h"
#include <QObject>


class LIBRUM_EXPORT Something : public QObject
{
    Q_OBJECT
    QML_ELEMENT

public:
    Something();
    Q_INVOKABLE void doSomething();
};
