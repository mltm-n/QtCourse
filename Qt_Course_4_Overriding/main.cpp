#include <QCoreApplication>
# include "lion.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    lion king;
    king.speak();
    return a.exec();
}
