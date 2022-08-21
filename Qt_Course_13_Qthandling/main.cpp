#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool doDivision(int max){

        int value;
        qInfo()<<"Number:";
        cin >> value;
        try {
            if(value == 0 || value == NULL) throw "cannot divide by zero";
            if(value > 5) throw std::out_of_range("Should be less than 5");

            int result = max / value;
            qInfo() << "Result:"<< result;

            return true;

        } catch (std::exception &e) {

            qWarning()<<e.what();
            return false;
        }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max=44;
    do{

    }while (doDivision(max));


    return a.exec();
}
