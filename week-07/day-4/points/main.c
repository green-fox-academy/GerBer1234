#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} point;

point create_point(float x, float y);

float distance(point p1, point p2);

int main() {
    point p1 = create_point(1, 1);
    point p2 = create_point(1, 5.5);
    float dist = distance(p1, p2);
    printf("%.2f", dist);
    return 0;
}

point create_point(float x, float y) {
    point poi;
    poi.x = x;
    poi.y = y;
    return poi;
}

float distance(point p1, point p2) {
    float xy = sqrtf(((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y)));
    return xy;
}