#include <QCoreApplication>
#include <QDebug>

template<class T, class F>
T add(T value1, F value2) {

    return value1 + value2;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << add<int, double>(1,4.6); // Always give it a template
    qInfo() << add(8.21,4);
    qInfo() << add(55,true);
    qInfo() << add(true,55);
    qInfo() << add(true,-1);


    //qInfo() << add(55, "hello world"); //fail

    return a.exec();
}
