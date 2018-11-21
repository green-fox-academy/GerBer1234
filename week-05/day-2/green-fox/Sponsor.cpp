#include <utility>

#include "Sponsor.h"

void Sponsor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << " who represents " <<
              _company << " and hired " << _hiredStudents << " students so far." << std::endl;
}

void Sponsor::hire() {
    _hiredStudents++;
}

std::string Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

Sponsor::Sponsor(){
    _company = "Google";
    _hiredStudents = 0;
}

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) {
    _hiredStudents = 0;
    _company = std::move(company);
}
