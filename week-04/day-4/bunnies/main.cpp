#include <iostream>

int bunnies(int n);

int main() {
    int num;

    do {
        std::cout << "Give me a positive number, please " << std::endl;
        std::cin >> num;
    } while (num < 0);
    std::cout << bunnies(num);
    return 0;
}

int bunnies(int n) {
    if (n == 0) {
        return 0;
    } else { return 2 + bunnies(n - 1); }
}