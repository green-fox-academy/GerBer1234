#ifndef GREEN_FOX_MENTOR_H
#define GREEN_FOX_MENTOR_H
#include "Person.h"

enum class Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};
class Mentor : public Person
{
public:
    Mentor();
    Mentor(std::string name, int age, Gender gender, Level level);
    std::string levelToString();
    std::string getGoal() override;
    void introduce() override;
private:
   Level _level;
};


#endif //GREEN_FOX_MENTOR_H
