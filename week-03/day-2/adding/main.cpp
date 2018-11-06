#include <iostream>

int main()
{

    int a = 20;
    int b = 17;
    int *aPointer = &a;
    int *bPointer = &b;
    std::cout << *aPointer+*bPointer << std::endl;

    return 0;
}