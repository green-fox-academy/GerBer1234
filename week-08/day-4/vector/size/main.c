#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vector.h"

int main() {
    vector_t *v = init_vector();
    add(v);
    print_vector(v);
    printf("\nSize of the vector: %d",size(v));
    free(v);
    return 0;
}