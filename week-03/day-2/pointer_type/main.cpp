#include <iostream>

int main ()
{
    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPointer;
    aPointer=&a;
    double *bPointer;
    bPointer=&b;
    std::string *namePointer;
    namePointer = &name;

    std::cout << aPointer << std::endl;
    std::cout << bPointer << std::endl;
    std::cout << namePointer << std::endl;

    std::cout << *aPointer << std::endl;
    std::cout << *bPointer << std::endl;
    std::cout << *namePointer << std::endl;

    return 0;
}