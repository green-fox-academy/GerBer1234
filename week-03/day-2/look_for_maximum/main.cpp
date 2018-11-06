#include <iostream>

int main() {
    int number = 0;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> number;
    int array[number];
    std::cout << "Give me " << number << " numbers, please" << std::endl;
    for (int i = 0; i < number; i++) {
        int x = 0;
        std::cin >> x;
        array[i] = x;
    }
    int max=0;
    for (int i = 0; i < number; i++) {

        if(array[i]>max)
        max=array[i];}
    std::cout << "The biggest number in the array is " << max << std::endl;
    std::cout << "The memory adress of it is " << &max << std::endl;

    // It should print out the biggest number in the given array and the memory address of it

    return 0;
}