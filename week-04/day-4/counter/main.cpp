#include <iostream>

int counter(int x);

int main() {
    int num;
    std::cout << "Give me a number, please " << std::endl;
    std::cin >> num;
    counter(num);
    return 0;
}

int counter(int x) {
    if (x >= 1) {
        std::cout << x << std::endl;
        counter(x - 1);
    }
}