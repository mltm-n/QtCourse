#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDivision(int max){

        int value;
        qInfo()<<"Number:";
        cin >> value;


    if(value == 0 || value==NULL) {
       qWarning()<< "cannot divide by zero";

       return false;
    }
    if(value > 5) {
        qWarning()<< "Should be less than 5";

        return false;
    }
    if(value == 1) {
        qWarning()<<"Should be greater than 1.";

        return false;
    }

        int result = max / value;
        qInfo() << "Result:"<< result;

        return true;
}


int main3(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max=44;
    do{

    }while (doDivision(max));


    return a.exec();
}
