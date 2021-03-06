#ifndef CREATE_VECTOR_VECTOR_H
#define CREATE_VECTOR_VECTOR_H

typedef struct vector {
    int size;
    int capacity;
    int *elements;
} vector_t;

vector_t *init_vector();

void add(vector_t *v);

void print_vector(vector_t *v);

int size(vector_t* v);

#endif //CREATE_VECTOR_VECTOR_H
