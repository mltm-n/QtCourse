#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>

#include "freezer.h"
#include "microwave.h"
#include "toaster.h"

class appliance : public QObject, public freezer, public microwave, public toaster
{
    Q_OBJECT
public:
    explicit appliance(QObject *parent = nullptr);

signals:


    // toaster interface
public:
    bool toast();

    // microwave interface
public:
    bool cook();

    // freezer interface
public:
    bool freeze();
};

#endif // APPLIANCE_H
