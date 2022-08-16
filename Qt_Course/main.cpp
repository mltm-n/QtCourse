#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "classes.h"
#include "laptop.h"

//INTRO TO FUNCTIONS
/*int calc (int offset, int age)
{
    if(offset == 0) qFatal("Offset cannot be 0"); //Function flow control

    if(age>120 || age<0){
        qFatal("Unvalid age value."); //Function flow control
    }
    return offset*age;
}
int dogyears(int age){
    return calc (7,age);
}

int catyears(int age){
    return calc (9,age);
}*/
//OVERLOADING

/*
void test(int age){
    qInfo() << "your age: "<< age ;
}

void test(bool stats){
    if(stats){
        qInfo()<<"True:)";

    }
     else{
                 qInfo()<<"False!";
    }
}*/

//BY VALUE BY REF
//pass by value -COPY

/*void testVal(int x){

    x = x*10;
    qInfo()<<   "x="<<x;
}

//pass by ref - tHE EXACT OBJECT /NOT COPY
void testRef(int &x){
    x = x*10;
    qInfo()<<   "x="<<x;
}

void testRef1(int &y){
    y = y*10;
    qInfo()<<   "y="<<y;
}*/

//fUNCTIONS IN STRUCTS

/*struct laptop{
    int weight=5;

    double prize(){
        return weight * 0.45268;
    }
};*/

  //CONSTRUCTORS AND DECONSTRUCTORS
/*void test(laptop &machine){ //by value would attempt to make a copy! Qobject dont like to be copied.You cannot copy a QObject.
    machine.test();
}


void makelaptops(QObject* parent){
    laptop mine(NULL,"lenovo");
    laptop yours (parent  , "monster");


    mine.weight = 2;
    yours.weight = 5;

test(mine);
test(yours);

//stack will delete variables.

}*/



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    //AGE PRACTISE
    /*int age;

    qInfo() << "Enter age: ";

    std::cin >> age;

    qInfo() << "Age is : " << age <<"!!"; */

    //FUNCTIONS PARAMS
    /*int age;
    qInfo()<<"Enter your age :";
    std::cin >> age;

    qInfo()<<"Your dog age: "<<dogyears(age);
    qInfo()<<"Your cat age: "<<catyears(age);*/

    //INTRO TO FUNCTIONS
        /*test(52);
        test(true);*/

    //fUNCTIONS IN STRUCTS
    /*
    laptop lenovo;
    qInfo() << "Weight:" <<lenovo.weight;
    qInfo() << "Prize:" << lenovo.prize();*/


    //BY VALUE BY REF

    /*int x = 7;
    int y= 7;

    testVal(x);
    qInfo()<<"x="<<x;

    testRef(x);
    qInfo()<<"x="<<x;

    testRef1(y);
    qInfo()<<"y="<<y;*/

    //INTRO TO CLASSES

    /*Classes A; ---> A,B,C =instance
    Classes B;
    Classes C;

   A.speak("meow");
   B.speak("hav");
   C.speak("cik");*/

    //CONSTRUCTORS AND DECONSTRUCTORS



    //QCoreApplication a(argc, argv);

    /*laptop mine(NULL,"lenovo");
    laptop yours (&a  , "monster");


    mine.weight = 2;
    yours.weight = 5;

    makelaptops(&a);*/

    //yıkımı göstermedi çünkü Qcoreapplicationun akışı takip ediliyor,tüm uygulamayı durduruyor direkt, bu yüzden sadece constructed çıktısnı alabiliyoruz



    return a.exec();
}
