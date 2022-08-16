#include <QCoreApplication>
#include <QDebug>


void test (QString * value){
    qInfo()<<"Test:"<<*value;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString* data = new QString("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa!");

    qInfo()<<"Actual size "<<data->length();
    qInfo()<<"Pointer size "<<sizeof(data);
    qInfo()<<"data "<<*data;
    qInfo()<<"Sizeof "<<sizeof(*data);
    qInfo()<<"Pointer "<<data;

    test(data);

    delete data;

    test(data);
    return a.exec();

}
