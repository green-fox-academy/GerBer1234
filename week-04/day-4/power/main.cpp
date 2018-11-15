#include <iostream>

int power(int n, int e);
// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int main() {
    int num = 1;
    int ex = 1;
    int res = 0;
    std::cout << "Give me a number, please " << std::endl;
    std::cin >> num;
    std::cout << "Exponent" << std::endl;
    std::cin >> ex;
    res = power(num, ex);
    std::cout << res;
    return 0;
}

int power(int n, int e) {
    if (e <= 0) { return -1; }
    else if (e == 1) { return n; }
    else { return (n * power(n, e - 1)); }
}