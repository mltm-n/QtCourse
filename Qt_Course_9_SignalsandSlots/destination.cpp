#include "destination.h"
#include <QDebug>

destination::destination(QObject *parent)
    : QObject{parent}
{

}

void destination::onMessage(QString message)
{
    qInfo()<<"On Message:"<<message;
}
