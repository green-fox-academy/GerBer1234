#include <stdio.h>
#include <stdlib.h>

// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

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
        pointer[k] = k + 1;
        printf("%d ", pointer[k]);
    }
    return 0;
}