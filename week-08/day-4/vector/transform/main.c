#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct vector {
    int size;
    int capacity;
    int *elements;
} vector_t;

vector_t *init_vector();

void * add(vector_t *v);

void function(void (*f)(vector_t));

int main() {
    vector_t *v = init_vector();
    function(add(v));
    return 0;
}

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

void * add(vector_t *v) {
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

void function(void (*f)(vector_t)){
    vector_t *v = init_vector();
    int sum = 0;
    for (int i = 0; i < v->size; ++i) {
        sum += v->elements[i];
    }
    printf("%d",sum);
}