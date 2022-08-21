#include <QCoreApplication>
#include <QDebug>
#include <QDateTime>
#include <QTime>
#include <QDate>
#include <QVariant>

void test(QVariant value){
    qInfo()<<value;
    int test = 0;
    bool ok = false;

    test = value.toInt(&ok);

    if(ok){
        qInfo()<<"INT"<<test;

    }else{
        qInfo()<<"not a number";
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
        //Qint Class
       qint8 value8 = 0;
       qint16 value16 = 0;
       qint32 value32 = 0;
       qint64 value64 = 0;
       qintptr valueptr = 0;

       qInfo() << "value8: " << sizeof (value8);
       qInfo() << "value16: " << sizeof (value16);
       qInfo() << "value32: " << sizeof (value32);
       qInfo() << "value64: " << sizeof (value64);
       qInfo() << "valueptr: " << sizeof (valueptr);

       //QString Class
       QString name = "Meltem";

       qInfo()<<name;
       qInfo()<<name.mid(1,4);
       qInfo()<<name.insert(6, " Inc");
       qInfo()<<name.insert(0, "Mrs. ");
       qInfo()<<name.split(" ");


       int index = name.indexOf(".");
       qInfo()<<name.remove(0,index+1);

       QString title = "student";
       QString full = name.trimmed() + " " + title;

       qInfo() << full;

       qInfo() << full.toLatin1();

            //QDate Class
            QDate today = QDate::currentDate();
          qInfo() << today;
          qInfo() << today.addDays(1);
          qInfo() << today.addYears(20);
          qInfo() << today.toString(Qt::DateFormat::SystemLocaleDate);
          qInfo() << today.toString(Qt::DateFormat::TextDate);

            //QTime Class
          QTime now = QTime::currentTime();
          qInfo() << now;
          qInfo() << now.toString(Qt::DateFormat::DefaultLocaleLongDate);
          qInfo() << now.toString(Qt::DateFormat::DefaultLocaleShortDate);

            //QDateTime Class
          QDateTime current = QDateTime::currentDateTime();
          qInfo() << "current: " << current;

          QDateTime expire = current.addDays(45);
          qInfo() << "expire: " << expire;

            //QByteArray Class
             QString greeting = "Hello";
              QByteArray buffer(greeting.toLatin1());
              buffer.append("!");

              qInfo() << buffer;

              qInfo() << buffer.rightJustified(20,'.');
              qInfo() << buffer.at(buffer.length() - 1);

              QString modified(buffer);
              qInfo() << modified;

                //QVariant Class
              QVariant value1= 1;
              QVariant value2 = "Hello";
                test(value1);
                test(value2);

                //QStringList
                QString data = "hello how are you c b a";
                QStringList lst = data.split(" ");

                qInfo()<<lst;

                foreach (QString str, lst) {

                    qInfo()<<str;

                }

                lst.sort(Qt::CaseInsensitive);

                qInfo()<<lst;

                QString myVar = "hello";
                if(lst.contains(myVar)){
                    int index =lst.indexOf(myVar);
                    qInfo()<<lst.value(index);
                }

                //QList Class
                QList<QString> list = data.split(" "); //templated

                foreach(QString word, list) {
                    qInfo() << word;
                }

                QList<int> ages({44, 56,21, 13});
                foreach(int age, ages) {
                    qInfo() << "Age: " << age;
                }


                //QVector Class
                QVector<int> agess({44,56,21,13});
                   foreach(int age, agess) {
                       qInfo() << age;
                   }
    return a.exec();
}
