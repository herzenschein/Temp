#include <QDebug>
#include "something.hpp"

void Something::doSomething()
{
    // qInfo() has the advantage that it shows in the Application Output window in QtCreator.
    qInfo() << "Something!!!";
}
