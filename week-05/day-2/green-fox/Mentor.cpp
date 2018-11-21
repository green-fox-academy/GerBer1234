#include <utility>

#include "Mentor.h"
#include "Person.h"

std::string Mentor::getGoal() {
    return "My goal is: Educate brilliant junior software developers.";
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << " " << levelToString()
    << " mentor." << std::endl;
}

std::string Mentor::levelToString() {
    if (_level == Level::JUNIOR) {
        return "JUNIOR";
    } else if (_level == Level::INTERMEDIATE){
        return "INTERMEDIATE";
    } else {
        return "SENIOR";
    };
}

Mentor::Mentor() {
    _level = Level::INTERMEDIATE;
}

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : Person (std::move(name), age, gender){
    _level = level;
}
