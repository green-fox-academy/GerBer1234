#include <stdio.h>
#include <stdlib.h>

int prime(int num);

int main() {
    int num = 0;
    printf("Give me  a number, please.");
    scanf("%d", &num);
    if (prime(num) == 1) {
        printf("Your number is a prime.");
    } else {
        printf("Your number is not a prime.");
    }
    return 0;
}

int prime(int num) {
    int i = 0;
    for (i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }
    if (i == num)
        return 1;
}