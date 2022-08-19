#ifndef STATION_H
#define STATION_H

#include <QObject>

class station : public QObject
{
    Q_OBJECT
public:
    explicit station(QObject *parent = nullptr);

signals:

};

#endif // STATION_H
