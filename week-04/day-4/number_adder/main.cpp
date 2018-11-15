#include <iostream>

int adder(int x);

int main() {

    int num;
    std::cout << "Give me a number, please " << std::endl;
    std::cin >> num;
    std::cout << adder(num);
    return 0;
}
int adder(int x){
    return x >= 1 ? x + adder(x - 1) : 0;
}