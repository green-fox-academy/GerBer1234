#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vector.h"

int main() {
    int value = 0;
    int index = 0;
    vector_t *v = init_vector();
    add(v);
    print_vector(v);
    printf("\nGive me a new element of the vector, please: ");
    scanf("%d", &value);
    printf("Give me an index of the new element: ");
    scanf("%d", &index);
    insert(v, value, index);
    print_vector(v);
    free(v);
    return 0;
}