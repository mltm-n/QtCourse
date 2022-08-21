#ifndef TEST_H
#define TEST_H
 //Doesn't know about QString.
//The QDebug library doesn't even included.
template<typename T> //Can be used QString as a type with typename.
class test{
public:
    T add(T value1, T value2){
        return value1+value2;
    }
};

#endif // TEST_H
