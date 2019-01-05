#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vector.h"

int main() {
    vector_t *v = init_vector();
    int vc = v->capacity;
    add(v);
    printf("Capacity of the vector: %d\n", v->capacity);
    print_vector(v);
    pop_back(v);
    if (v->capacity != vc && v->size != 0) {
        printf("Capacity of the vector after the deletion: %d\n", v->capacity);
        print_vector(v);
    } else if (v->capacity == vc && v->size != 0) {
        printf("Capacity didn't change after the deletion.\n");
        print_vector(v);
    } else if (v->capacity != vc && v->size == 0) {
        printf("Capacity of the vector after the deletion: %d\n", v->capacity);
        printf("The vector has zero element.\n");
    }
    free(v);
    return 0;
}