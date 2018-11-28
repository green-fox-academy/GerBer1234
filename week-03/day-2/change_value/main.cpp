#include <iostream>

int main() {
    float temperature = 21.3;
    float *tempPtr;
    tempPtr = &temperature;
    *tempPtr = 22;
    std::cout << temperature;
    return 0;
}