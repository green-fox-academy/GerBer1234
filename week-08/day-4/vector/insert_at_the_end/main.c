#include <stdio.h>
#include <math.h>
#include "vector.h"

int main() {
    int value = 0;
    vector_t *v = init_vector();
    add(v);
    printf("Give me a new element of the vector, please: ");
    scanf("%d",&value);
    push_back(v,value);
    print_vector(v);
    return 0;
}