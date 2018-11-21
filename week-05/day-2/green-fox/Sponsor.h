#ifndef GREEN_FOX_SPONSOR_H
#define GREEN_FOX_SPONSOR_H
#include "Person.h"

class Sponsor: public Person {
public:
    Sponsor();
    Sponsor(std::string name, int age, Gender gender, std::string company);
    void introduce() override;
    void hire();
    std::string getGoal() override;
private:
    std::string _company;
    int _hiredStudents;
};


#endif //GREEN_FOX_SPONSOR_H
