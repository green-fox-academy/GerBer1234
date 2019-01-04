#include <stdio.h>
#include <math.h>
#include "vector.h"

int main() {
    vector_t *v = init_vector();
    add(v);
    print_vector(v);
    return 0;
}