#include <stdio.h>

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    printf("Give me the sides (a,b,c) of the cuboid, please:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    double vol = a * b * c;
    double sur = 2 * (a * b + a * c + b * c);
    printf("Volume: %.0lf\n", vol);
    printf("Surface: %.0lf\n", sur);
    return 0;
}
