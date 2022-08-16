#include "appliance.h"

appliance::appliance(QObject *parent)
    : QObject{parent}
{

}


bool appliance::cook(){ return true;};
bool appliance::toast(){ return true;};
bool appliance::freeze(){ return true;};
