#include <utility>
#include "Student.h"
#include "Person.h"

std::string Student::getGoal() {
    return "My goal is: Be a junior software developer.";
}

void Student::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << " from " <<
    _previousOrganization << " who skipped " << _skippedDays << " days from the course already." << std::endl;
}

int Student::skipDays(int numberOfDays) {
    _skippedDays+=numberOfDays; }

Student::Student() {
    _previousOrganization = "The School of Life";
    _skippedDays = 0;

}

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization) : Person(
        std::move(name), age, gender){
    _previousOrganization = std::move(previousOrganization);
    _skippedDays = 0;
}
