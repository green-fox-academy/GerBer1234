#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vector.h"

int main() {
    vector_t *v = init_vector();
    add(v);
    printf("Capacity of the vector: %d\n",v->capacity);
    printf("Size of the vector: %d\n",v->size);
    print_vector(v);
    printf("\nAvailable space in the vector: %d",capacity(v));
    free(v);
    return 0;
}