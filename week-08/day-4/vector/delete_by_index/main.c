#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vector.h"

int main() {
    int index = 0;
    vector_t *v = init_vector();
    add(v);
    print_vector(v);
    if (erase(v, index) == 1) {
        printf("Deleton successful!\n");
        print_vector(v);
        free(v);
        return 1;
    } else {
        printf("This is not a valid index.");
        free(v);
        return 0;
    }
}