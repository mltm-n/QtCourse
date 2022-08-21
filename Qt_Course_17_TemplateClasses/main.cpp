#include <QCoreApplication>
#include <QDebug.h>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test<int> intCalc;
    qInfo() << intCalc.add(1,4);

    test<double> doubleCalc;
    qInfo() << doubleCalc.add(1.54,4.065);

    test<QString> strCalc;
    qInfo() << strCalc.add("hello","world");

    return a.exec();
}
