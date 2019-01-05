#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vector.h"

int main() {
    vector_t *v = init_vector();
    add(v);
    if(empty(v)==1){
        printf("The vector is empty.");
        free(v);
        return 1;
    }else{
        print_vector(v);
        free(v);
        return 0;
    };
}