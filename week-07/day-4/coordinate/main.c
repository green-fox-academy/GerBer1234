#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} coordinates;

int main() {
    srand((unsigned int) time(NULL));
    coordinates array[20];
    for (int i = 0; i < 20; ++i) {
        array[i].x = rand() % 20 + 1;
        array[i].y = rand() % 20 + 1;
        printf("%d %d\n", array[i].x, array[i].y);
    }
    return 0;
}