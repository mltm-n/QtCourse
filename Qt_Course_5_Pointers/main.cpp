#include <QCoreApplication>
#include <QDebug>

void test (QString name){
    qInfo() << "Size:" << name.length();

}

void testi(QString* name){
    qInfo()<< "Size"<<name ->length();
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

        QString name = "Meltem"; // Qstring constructor here

        test(name);
        testi(&name);
    // deconsctuctors called here
    return a.exec();
}
