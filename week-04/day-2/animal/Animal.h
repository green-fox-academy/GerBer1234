#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H
#include <iostream>

class Animal {
public:
    Animal(std::string name);
    int eat();
    int drink();
    int play();
    int getHunger();
    int getThirst();
private:
    int _hunger;
    int _thirst;

};


#endif //ANIMAL_ANIMAL_H
