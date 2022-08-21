#include "test.h"

test::test(QObject *parent)
    : QObject{parent}
{

}

QString test::message()
{
    return otherMessage;
}

void test::setMessage(QString value)
{
    otherMessage = value;

    emit messageChanged(otherMessage);
}
