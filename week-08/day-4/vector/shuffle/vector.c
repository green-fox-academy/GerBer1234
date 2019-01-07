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
    int e = rand() % 10 + 1;
    for (int i = 0; i < e; i++) {
        int r = rand() % 20;
        v->elements[i] = r;
    }
    v->size = e;
}

//Version 1
void shuffle(vector_t *v) {
    int temp = 0;
    if (v->size == 1) {
        return;
    } else if (v->size == 2) {
        temp = v->elements[0];
        v->elements[0] = v->elements[1];
        v->elements[1] = temp;
    } else {
        for (int i = v->size - 1; i > 0; i--) {
            int r = rand() % (i + 1);
            temp = v->elements[i];
            v->elements[i] = v->elements[r];
            v->elements[r] = temp;
        }
    }
}

//Version 2
/*void shuffle(vector_t *v) {
    int temp = 0;
    if (v->size == 1) {
        return;
    } else if(v->size == 2){
        temp=v->elements[0];
        v->elements[0]=v->elements[1];
        v->elements[1]=temp;
    }{

        for (int i = 0; i < v->size; i++) {
            int r1 = rand() % v->size;
            int r2 = rand() % v->size;
            if (r2 == r1) {
                do {
                    r2 = rand() % v->size;
                } while (r2 == r1);
            }
            temp = v->elements[r1];
            v->elements[r1] = v->elements[r2];
            v->elements[r2] = temp;
        }
    }
}*/

void print_vector(vector_t *v) {
    printf("Elements of the vector: ");
    for (int i = 0; i < v->size; ++i) {
        printf("%d\t", v->elements[i]);
    }
    printf("\n");
}