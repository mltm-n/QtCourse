#ifndef RADIO_H
#define RADIO_H

#include <QObject>

class radio : public QObject
{
    Q_OBJECT
public:
    explicit radio(QObject *parent = nullptr);

signals:

};

#endif // RADIO_H
