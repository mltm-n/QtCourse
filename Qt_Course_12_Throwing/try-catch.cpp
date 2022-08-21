#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

bool Division(int max){
    try {
        int value;
        qInfo()<<"Number:";
        cin >> value;


    if(value == 0) throw "cannot divide by zero";
    if(value > 5) throw 99;
    if(value == 1) throw std::runtime_error("Should be greater than 1.");
        int result = max / value;
        qInfo() << "Result:"<< result;

        return true;

    } catch(std::exception const& e){
        qWarning()<<"STD way"<<e.what();
return false;
    } catch(int e){
        qWarning()<<"A number"<<e;
return false;
    } catch(char* e){
        qWarning()<<"a pointer to char"<<e;
return false;
    } catch (...){ //Catch all
        qWarning()<<"Something went wrong, but cannot define what it is.";

    return false;
    }

    return true;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max=44;
    do{

    }while (Division(max));


    return a.exec();
}
