#ifndef UNIQUE_VECTOR_H
#define UNIQUE_VECTOR_H

typedef struct vector {
    int size;
    int capacity;
    int *elements;
} vector_t;

vector_t *init_vector();

void add(vector_t *v);

int search(vector_t *v, int value);

int erase(vector_t *v, int index);

void printDistinct(vector_t *v);

void print_vector(vector_t *v);

#endif //UNIQUE_VECTOR_H
