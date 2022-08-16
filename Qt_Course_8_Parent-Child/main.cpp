#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //create the parent
    test* parent = new test(/*parent yazılır etc.: nullptr */ &a); //parent and a child of QCoreApplication

    parent->dog =new animal(parent);

    delete parent;// deconstruct eder, parent silindiğinde child da silineceği için
    return a.exec();

    //a deconstructed
}
