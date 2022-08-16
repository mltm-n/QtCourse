#include <QCoreApplication>
#include <QDebug>
#include "appliance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    appliance robot;
    qInfo()<<"Can cook:" << robot.cook();
    qInfo()<<"Can freeze:" << robot.freeze();
    qInfo()<<"Can toast:" << robot.toast();


    return a.exec();
}
