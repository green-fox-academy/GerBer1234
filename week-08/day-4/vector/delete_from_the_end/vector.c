#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include <time.h>

vector_t *init_vector() {
    vector_t *vector = malloc(sizeof(vector_t));
    if (vector == NULL) {
        printf("Error! memory not allocated.");
        exit(-1);
    }
    vector->elements = malloc(10 * sizeof(int));
    vector->size = 0;
    vector->capacity = 8;
    return vector;
}

void add(vector_t *v) {
    srand((unsigned int) time(NULL));
    int e = rand() % 10 + 1;
    for (int i = 0; i < e; i++) {
        int r = rand() % 20;
        v->elements[i] = r;
    }
    v->size = e;
}

void pop_back(vector_t *v) {
    v->size--;
    if(v->size<=v->capacity/2){
        v->capacity = (3*v->capacity)/4;
        v->elements = realloc(v->elements,sizeof(int)*v->capacity);
    }
}

void print_vector(vector_t *v) {
    printf("Elements of the vector: ");
    for (int i = 0; i < v->size; ++i) {
        printf("%d\t", v->elements[i]);
    }
    printf("\n");
}