#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    int aj[] = {3, 4, 5, 6, 7};
    int i = 0;
    int j = sizeof(aj) / sizeof(aj[0]) - 1;
    while (i < j) {
        int reverse = aj[i];
        aj[i] = aj[j];
        aj[j] = reverse;
        i++;
        j--;
    }
    for (i = 0; i < sizeof(aj) / sizeof(aj[0]); i++) {
        std::cout << aj[i] << " ";
    }
    return 0;
}