#include <iostream>

int bunnies(int n);

int main() {
    int num;
    do{std::cout << "Give me a positive number, please" << std::endl;
    std::cin >> num;}
    while(num<0);
    std::cout << bunnies(num);
    return 0;
}

int bunnies(int n) {
    int res, odd, even;
    if (n != 0) {
        if (n % 2 != 0) {
            odd = 2 + bunnies(n - 1);
            return odd;
        } else {
            even = 3 + bunnies(n - 1);
            return even;
        }
    }else{return 0;}
}