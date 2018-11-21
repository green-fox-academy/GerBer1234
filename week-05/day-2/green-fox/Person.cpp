#include <utility>

#include "Person.h"

void Person::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << "." << std::endl;
}

Person::Person(){
    _age = 30;
    _name = "Jane Doe";
    _gender = Gender::FEMALE;
}
Person::Person(std::string name, int age, Gender gender) {
    _name = std::move(name);
    _age = age;
    _gender = gender;
}

std::string Person::genderToString() {
    if (_gender == Gender::MALE) {
        return "MALE";
    } else {
        return "FEMALE";

    };
}

std::string Person::getGoal() {
    return "My goal is: Live for the moment!";
}
