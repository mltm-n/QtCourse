#include <QCoreApplication>
#include <QDebug>

#include<QTextStream>
#include<iostream>

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

    //Qt::QueuedConnection is used when you work with threads(?)
    boombox.connect(&boombox,&radio::quit,&a,&QCoreApplication::quit,Qt::QueuedConnection);

    do{
       qInfo()<< "Enter on, off, test or quit:";
       QTextStream qtin(stdin);    // reading the standard input using the QTesxtStream.
       QString line= qtin.readLine().trimmed().toUpper(); //trim --> no whitespace, toUpper --> upper cases

       if(line=="ON"){
           qInfo()<<"Turing the radio on";

           for(int i = 0 ; i<3 ; i++){
               station* channel = channels[i];
               boombox.connect(channel,&station::send,&boombox,&radio::listen);
           }

           qInfo()<<"Radio is on";
       }
       if(line=="OFF"){
           qInfo()<<"Turing the radio off";

           for(int i = 0 ; i<3 ; i++){
               station* channel = channels[i];
               boombox.disconnect(channel,&station::send,&boombox,&radio::listen);
           }
           qInfo()<<"Radio is off";

       }
       if(line=="TEST"){
           qInfo()<<"Testing";
           for(int i = 0 ; i<3 ; i++){
               station* channel = channels[i];

                channel->broadcast("Broadcasting live"); // ??????
           }
           qInfo()<<"Testing complete";

       }
       if(line=="QUIT"){
           qInfo()<<"Radio is quited";
           emit boombox.quit();
           break;
       }
    }

    while(true);

    return a.exec();
}
