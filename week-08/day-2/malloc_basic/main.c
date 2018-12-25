#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pointer = NULL;
    pointer = malloc(10 * sizeof(int));
    if (pointer == NULL) {
        printf("Error! memory not allocated.");
        return -1;
    }
    for (int i = 0; i < 5; ++i) {
        pointer[i] = i;
    }
    for (int j = 0; j < 10; ++j) {
        printf("%d ", pointer[j]);
    }
    free(pointer);
    return 0;
}