#ifndef GREEN_FOX_PERSON_H
#define GREEN_FOX_PERSON_H
#include <iostream>

enum class Gender{
    MALE,
    FEMALE
};
class Person {
public:
    Person();
    Person(std::string name, int age, Gender gender);
    virtual void introduce();
    virtual std::string getGoal();
    std::string genderToString();
protected:
    Gender _gender;
    std::string _name;
    int _age;
};


#endif //GREEN_FOX_PERSON_H
