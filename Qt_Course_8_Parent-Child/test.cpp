#include "test.h"
#include <QDebug>

test::test(QObject *parent)
    : QObject{parent}
{

    qInfo()<<"Test constructed";

}

test::~test()
{
    qInfo()<<"Test deconstructed";

}
