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
    vector->capacity = 10;
    return vector;
}

void add(vector_t *v) {
    srand((unsigned int) time(NULL));
    int e = 0;
    do {
        printf("How many elements do you want to store? Maximum number of the elements is %d.\n", v->capacity);
        scanf("%d", &e);
        if (e < 0) {
            printf("Your number should be positive.\n");
            e = v->capacity + 1;
        }
    } while (e > v->capacity);
    for (int i = 0; i < e; i++) {
        int r = rand() % 20;
        v->elements[i] = r;
    }
    v->size = e;
}

void insert(vector_t *v, int value, int index) {
    v->size += 1;
    if (v->size == v->capacity) {
        v->capacity *= 2;
        v->elements = realloc(v->elements, sizeof(int) * 20);
    }
    for (int i = 0; i <= v->size - index - 1; ++i) {
        v->elements[v->size - i] = v->elements[v->size - i - 1];
    }
    v->elements[index] = value;

}

void print_vector(vector_t *v) {
    printf("Elements of the vector: ");
    for (int i = 0; i < v->size; ++i) {
        printf("%d\t", v->elements[i]);
    }
}