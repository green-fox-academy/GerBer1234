#include <iostream>

int main() {
    std::cout << "Give me five numbers, please: ";
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        std::cin >> numbers[i];
    }
    int *numbersPtr=numbers;
    for (int i = 0; i < 5; i++) {
        std::cout << &numbersPtr[i] << std::endl;
    }
    return 0;
}