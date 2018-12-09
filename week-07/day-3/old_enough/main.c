#include <stdio.h>
#include <stdlib.h>

void oldEnough(int age);

int main() {
    int age = 0;
    printf("Give me your age, please: ");
    scanf("%d", &age);
    oldEnough(age);
    return 0;
}

void oldEnough(int age) {
    if (age > 17) {
        printf("You are old enough. It means: you can buy alcohol in Hungary. Enjoy.");
    } else {
        printf("You are not enough old. You can't buy alcohol in Hungary under 18.");
    }
}