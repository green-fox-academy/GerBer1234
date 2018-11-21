#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H
#include <iostream>

class Animal {
public:
    virtual std::string breed()=0;
    std::string getName();
protected:
    std::string _name;
    int _age;
    std::string _sex;
    int _numberOfLegs;
    int _numberOfEyes;
};


#endif //ZOO_ANIMAL_H
