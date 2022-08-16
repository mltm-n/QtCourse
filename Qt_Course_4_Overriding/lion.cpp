
#include "lion.h"

lion::lion(QObject *parent)
    : feline{parent} // --> constructor
{

}

void lion::speak()
{
    qInfo()<<"Roar";
    //call the function from thw e base class

    feline::speak();

}
