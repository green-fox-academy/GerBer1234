#include <iostream>
#include <fstream>

float givenum(float number);

int main() {
    float x = 0;
    try {
        std::cin >> x;
        if (x == 0) {
            throw 1;
        }
        std::cout << givenum(x);
    }
    catch (...) { std::cout << "x can't be 0"; }
    return 0;
}

float givenum(float number) {
    float res = 0;
    res = number / 10;
    return res;
}