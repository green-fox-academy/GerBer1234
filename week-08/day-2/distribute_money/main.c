#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int money = 1024;
    srand((unsigned int) time(NULL));
    int r = rand() % (50 - 20 + 1) + 20;
    int *relatives = calloc(r, sizeof(int));
    int i = 0;
    do {
        int w = rand() % r + 0;
        if (money > 0 && relatives[w] == 0) {
            relatives[w] = money / 2;
            money -= relatives[w];
            i++;
        }
    } while (i != r);
    for (int i = 0; i < r; ++i) {
        printf("%d ", relatives[i]);
    }
    free(relatives);
    return 0;
}