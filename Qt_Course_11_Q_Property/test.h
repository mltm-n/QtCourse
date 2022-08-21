#ifndef TEST_H
#define TEST_H

#include <QObject>

class test : public QObject
{
    Q_OBJECT

    QString otherMessage;
public:
    explicit test(QObject *parent = nullptr);

    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    QString message();
    void setMessage(QString value);

signals:
    void messageChanged(QString message);

};

#endif // TEST_H
