#include <iostream>

int index(const int *array, int lenght, const int *num);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int lenght = sizeof(numbers) / sizeof(numbers[0]);
    int num = 3;
    std::cout << index(numbers, lenght, &num);
    return 0;
}

int index(const int *array, int lenght, const int *num) {
    for (int i = 0; i < lenght; i++) {
        if (array[i] == *num) {
            return i;
        }
    }
    return 0;
}