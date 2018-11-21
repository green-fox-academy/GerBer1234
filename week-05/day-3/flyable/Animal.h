#ifndef FLYABLE_ANIMAL_H
#define FLYABLE_ANIMAL_H
#include <iostream>

class Animal {
public:
    virtual std::string getName() = 0;
    virtual std::string breed() = 0;
protected:
    std::string _name;
    int _age;
};


#endif //FLYABLE_ANIMAL_H
