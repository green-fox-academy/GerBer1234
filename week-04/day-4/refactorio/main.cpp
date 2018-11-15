#include <iostream>

int fact(int n);

int main() {
    int num;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> num;
    std::cout << fact(num);
    return 0;
}

int fact(int n) {
    if (n == 0) {
        return 1;
    } else if (n < 0) {
        return 0;
    } else {
        return n * fact(n - 1);
    }
}