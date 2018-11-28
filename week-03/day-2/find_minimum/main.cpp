#include <iostream>

int *minimum(int *numbers, int length);

int main() {
    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << *minimum(numbers, size);
    return 0;
}

int *minimum(int *numbers, int length) {
    int min = numbers[0];
    int *ptrMin = &numbers[0];
    for (int i = 0; i < length; i++) {
        if (numbers[i] < min) {
            *ptrMin = numbers[i];
        }
    }
    return ptrMin;
}