#include <iostream>

void size(int *numb);
void arrays(int array[], int *numb);
void maximum(int array[], int *numb);

int main() {
    int number;
    size(&number);
    int arraye[number];
    arrays(arraye, &number);
    maximum(arraye, &number);
    return 0;
}

void size(int *numb) {
    std::cout << "Give me a number,please " << std::endl;
    std::cin >> *numb;
}

void arrays(int array[], int *numb) {
    std::cout << "Give me " << *numb << " numbers, please" << std::endl;
    for (int i = 0; i < *numb; i++) { std::cin >> array[i]; }
}

void maximum(int array[], int *numb) {
    int max = array[0];
    for (int i = 0; i < *numb; i++) {
        if (array[i] > max) { max = array[i]; }
    }
    int *pointer = &max;
    std::cout << max << std::endl;
    std::cout << pointer << std::endl;
}