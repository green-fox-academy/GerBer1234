#include <stdio.h>

struct rectangular_cuboid {
    double a;
    double b;
    double c;
};

double GetSurface(struct rectangular_cuboid data);

double GetVolume(struct rectangular_cuboid data);

int main() {
    struct rectangular_cuboid data;
    data.a = 5;
    data.b = 6;
    data.c = 7;
    printf("%.1lf\n", GetSurface(data));
    printf("%.1lf", GetVolume(data));
    return 0;
}

double GetSurface(struct rectangular_cuboid data) {
    return 2 * (data.a * data.b + data.b * data.c + data.a * data.c);
}

double GetVolume(struct rectangular_cuboid data) {
    return data.a * data.b * data.c;
}