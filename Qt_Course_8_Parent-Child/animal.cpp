#include "animal.h"
#include <QDebug>

animal::animal(QObject *parent)
    : QObject{parent}
{

    qInfo()<<"Animal constructed";
}

animal::~animal()
{
    qInfo()<<"Animal deconstructed";

}
