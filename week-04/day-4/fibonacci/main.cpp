#include <iostream>

int fibo(int n);

int main() {
    int n = 0;
    std::cout << "Give me a number, please " << std::endl;
    std::cin >> n;
    std::cout << fibo(n);
    return 0;
}

int fibo(int n) {
    if ((n == 1) || (n == 0)) {
        return n;
    } else {
        return (fibo(n - 1) + fibo(n - 2));
    }
}