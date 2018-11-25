#include <iostream>
#include <string>

void swap(int p1, int p2);

int main(int argc, char *args[]) {
    int a = 15, b = 23;
    swap(a, b);
    return 0;
}

void swap(int p1, int p2) {
    int a = p1;
    int b = p2;
    std::cout << "a: " << a << " " << "b: " << b << std::endl;
    int s = p1;
    p1 = p2;
    p2 = s;
    std::cout << "a: " << p1 << " " << "b: " << p2 << std::endl;
    std::cout << ((p1 != a) && (p2 != b) ? "Well done. Everything is OK." : "Oooops, something wrong.");
}