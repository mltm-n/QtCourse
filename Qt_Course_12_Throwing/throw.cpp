#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool DivisionProcess(int max){
    int value;
    qInfo()<<"Number:";
    cin >> value;


    if(value == 0) throw "cannot divide by zero";

    int result = max / value;
    qInfo() << "Result:"<< result;

    return true;
}


int main2(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max=44;
    do{

    }while (DivisionProcess(max));


    return a.exec();
}
