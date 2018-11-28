#include <iostream>

int main() {
    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPtr = nullptr;
    aPtr = &a;
    double *bPtr = nullptr;
    bPtr = &b;
    std::string *namePtr = nullptr;
    namePtr = &name;
    std::cout << &aPtr << " " << *aPtr << std::endl;
    std::cout << &bPtr << " " << *bPtr << std::endl;
    std::cout << &namePtr << " " << *namePtr << std::endl;
    return 0;
}