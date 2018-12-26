#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, Y = 0;
    printf("Your number is: ");
    scanf("%d", &X);
    int *pointer = NULL;
    pointer = malloc(X * sizeof(int));
    if (pointer == NULL) {
        printf("Error! memory not allocated.");
        return -1;
    }
    printf("Give me %d numbers, please\n", X);
    for (int i = 0; i < X; ++i) {
        scanf("%d", &pointer[i]);
        Y += pointer[i];
    }
    realloc(pointer, Y * sizeof(int));
    for (int k = 0; k < Y; ++k) {
        pointer[k] = (k + 1) * 2;
        printf("Number %d: %d\n", k + 1, pointer[k]);
    }
    free(pointer);
    return 0;
}