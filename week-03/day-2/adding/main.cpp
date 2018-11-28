#include <iostream>

int main() {
    int a = 20;
    int b = 17;
    int *aPtr = &a;
    int *bPtr = &b;
    std::cout << *aPtr + *bPtr;
    return 0;
}