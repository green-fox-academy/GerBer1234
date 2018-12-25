#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pointer = NULL;
    pointer = malloc(10 * sizeof(int));
    if (pointer == NULL) {
        printf("Error! memory not allocated.");
        return -1;
    }
    for (int i = 0; i < 10; ++i) {
        pointer[i] = (i + 1) * 2;
    }
    for (int j = 0; j < 10; ++j) {
        printf("%d ", pointer[j]);
    }
    realloc(pointer, 0);
    return 0;
}