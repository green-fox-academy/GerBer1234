#include <iostream>

int *func(int *array, int length);

int main() {

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << *func(numbers, size) << std::endl;
    return 0;
}

int *func(int *array, int length) {
    int min = array[0];
    int *index = &array[0];
    for (int i = 0; i < length; i++) {
        if (array[i] < min) {
            *index = array[i];
        }

    }
    return index;
}