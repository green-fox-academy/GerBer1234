#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main() {
    int *pointer = NULL;
    int *pointer1 = NULL;
    pointer = malloc(10 * sizeof(int));
    pointer1 = malloc(10 * sizeof(int));
    if (pointer == NULL || pointer1 == NULL) {
        printf("Error! memory not allocated.");
        return -1;
    }
    for (int i = 0; i < 10; ++i) {
        pointer[i] = (i + 1) * 2;
        pointer1[i] = 2 * i + 1;
    }
    realloc(pointer1, 20 * sizeof(int));
    for (int k = 0; k < 10; ++k) {
        pointer1[k + 10] = pointer[k];
    }
    for (int i = 0; i < 20; ++i) {
        for (int j = i + 1; j < 20; ++j) {
            if (pointer1[i] < pointer1[j]) {
                int min = pointer1[i];
                pointer1[i] = pointer1[j];
                pointer1[j] = min;
            }
        }
    }
    for (int l = 0; l < 20; ++l) {
        printf("%d ", pointer1[l]);
    }
    free(pointer);
    free(pointer1);
    return 0;
}