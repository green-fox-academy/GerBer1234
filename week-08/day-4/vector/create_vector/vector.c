#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

vector_t *init_vector() {
    int n = 0;
    printf("Capacity of the vector: ");
    scanf("%d", &n);
    vector_t *vector = malloc(sizeof(vector_t));
    if (vector == NULL) {
        printf("Error! memory not allocated.");
        exit(-1);
    }
    vector->elements = malloc(n * sizeof(int));
    vector->size = 0;
    vector->capacity = n;
    return vector;
}

void add(vector_t *v) {
    int e = 0;
    do {
        printf("How many elements do you want to store? Maximum number of the elements is %d.",v->capacity);
        scanf("%d", &e);
    } while (e > v->capacity);
    for (int i = 0; i < e; i++) {
        printf("Enter %d. element of the vector:\n",i+1);
        scanf("%d", &v->elements[i]);
    }
    v->size = e;
}

void print_vector(vector_t *v) {
    printf("Elements of the vector: ");
    for (int i = 0; i < v->size; ++i) {
        printf("%d\t", v->elements[i]);
    }
}