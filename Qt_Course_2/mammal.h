#ifndef MAMMAL_H
#define MAMMAL_H

#include <QObject>
#include <QDebug>
#include "animal.h"

class mammal : public animal // inherited //replaced instead of QObject
{
    Q_OBJECT
public:
    explicit mammal(QObject *parent = nullptr);

signals:

};

#endif // MAMMAL_H
