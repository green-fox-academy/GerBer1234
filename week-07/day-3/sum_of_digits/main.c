#include <stdio.h>
#include <stdlib.h>

int sum(int num1, int num2);

int main() {
    int num1 = 0;
    int num2 = 0;
    printf("Give me two numbers, please.\n");
    printf("First number:");
    scanf("%d", &num1);
    printf("Second number:");
    scanf("%d", &num2);
    if (sum(num1, num2) == 1) {
        printf("The number of digits are equal.");
    } else {
        printf("The number of digits are not equal.");
    }
    return 0;
}

int sum(int num1, int num2) {
    int sum1 = 0;
    while (num1 != 0) {
        sum1 = sum1 + num1 % 10;
        num1 = num1 / 10;
    }
    int sum2 = 0;
    while (num2 != 0) {
        sum2 = sum2 + num2 % 10;
        num2 = num2 / 10;
    }
    if (sum1 == sum2) {
        return 1;
    } else {
        return 0;
    }
}