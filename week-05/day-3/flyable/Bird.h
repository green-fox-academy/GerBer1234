#ifndef FLYABLE_BIRD_H
#define FLYABLE_BIRD_H
#include "Flyable.h"
#include "Animal.h"

class Bird : public Flyable, public Animal {
public:
    explicit Bird(std::string name);
    void land() override;
    void fly() override;
    void takeOff() override;
    std::string getName() override;
    std::string breed() override;
};


#endif //FLYABLE_BIRD_H
