#include <iostream>

int sug(int *array, int length, int *num);

int main() {
    int x;
    std::cout << "Give me a number, please" << std::endl;
    std::cin >> x;
    int numbers[] = {1, 2, 3, 4, 5};
    int y = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << sug(numbers, y, &x) << std::endl;

    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    return 0;
}

int sug(int *array, int length, int *num) {
    for (int i = 0; i < length; i++) {
        if (array[i] == *num) { return i; }
    }

    return 0;
}