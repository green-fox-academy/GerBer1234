#include <iostream>

int main ()
{
    int *agePointer;
    int age = 31;
    agePointer=&age;
    std::cout << *agePointer << std::endl;

    return 0;
}