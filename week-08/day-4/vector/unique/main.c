#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vector.h"

int main() {
    vector_t *v = init_vector();
    add(v);
    print_vector(v);
    printDistinct(v);
    print_vector(v);
    free(v);
    return 0;
}