#include <iostream>

int sumDigit(int n, int sum);

int main() {

    int num = 0, sum = 0;
    std::cout << "give me a positive number, please " << std::endl;
    std::cin >> num;
    sum = sumDigit(num, sum);
    std::cout << sum;
    return 0;
}

int sumDigit(int n, int sum) {
    if (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
        return sumDigit(n, sum);
    } else { return sum; }
}