#include <iostream>

void swap(int *a, int *b);

int main() {
    int a = 10;
    int b = 316;
    swap(&a, &b);
    return 0;
}

void swap(int *a, int *b) {
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
    std::cout << *a << " " << *b;
}