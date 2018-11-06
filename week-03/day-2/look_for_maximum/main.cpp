#include <iostream>

int main() {
    int number = 0;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> number;
    int array[]={};
    std::cout << "Give me " << number << " numbers, please" << std::endl;
    for (int i = 0; i < number; i++) {
        int x = 0;
        std::cin >> x;
        array[i]=x;
    }
    std::cout << array[2];
    // It should print out the biggest number in the given array and the memory address of it

    return 0;
}