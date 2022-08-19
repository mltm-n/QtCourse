#include <QCoreApplication>
#include <QDebug>
#include "radio.h"
#include "station.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    radio boombox;
    station* channels[3];


    channels[0]= new station(&boombox,94,"Jazz");
    channels[1]= new station(&boombox,974,"Blues");
    channels[2]= new station(&boombox,964,"News");



    return a.exec();
}
