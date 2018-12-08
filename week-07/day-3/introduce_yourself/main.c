#include<stdio.h>

int main() {
    char *name = "Berenyi Gergely";
    int age = 37;
    double height = 1.86;
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2lf\n", height);
    return 0;
}