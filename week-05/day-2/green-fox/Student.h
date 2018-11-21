#ifndef GREEN_FOX_STUDENT_H
#define GREEN_FOX_STUDENT_H
#include <iostream>
#include "Person.h"

class Student : public Person
{
public:
    Student();
    Student(std::string name, int age, Gender gender, std::string previousOrganization);
    std::string getGoal() override;
    void introduce() override;
    int skipDays(int numberOfDays);
private:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //GREEN_FOX_STUDENT_H
