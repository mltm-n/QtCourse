#include <QCoreApplication>
#include <QDebug>

template<typename T>

void print(T value) {

    qInfo() << value;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    print<int>(8);
    print<double>(103.832);
    print<QString>("Hello");


    return a.exec();
}
