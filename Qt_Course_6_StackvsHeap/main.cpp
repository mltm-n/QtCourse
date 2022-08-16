#include "qdebug.h"
#include <QCoreApplication>

void display(QString * value)
{
    qInfo()<< "The pointer :" << value;

    qInfo()<< "The object :" << &value <<"A copy of the pointer";
              qInfo()<< "The data :" << *value;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

              QString name = "Meltem"; //stack

              QString* description = new QString("Hello");
    qInfo()<<"namelength "<< name.length();
    qInfo()<< "desc length "<< description->length();
              display(&name);
              display(description);

    delete description; // sets that pointer to zero

              return a.exec();
}
