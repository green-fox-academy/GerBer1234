#include <iostream>

int main() {
    int age = 31;
    int *agePtr;
    agePtr = &age;
    std::cout << *agePtr;
    return 0;
}