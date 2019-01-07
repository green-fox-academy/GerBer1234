#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vector.h"

int main() {
    int value = 0;
    vector_t *v = init_vector();
    add(v);
    print_vector(v);
    printf("Give me your number: ");
    scanf("%d", &value);
    int result = search(v, value);
    if (result >= 0) {
        printf("Your number's (%d) index is %d.", value, result);
    } else if (result == -1) {
        printf("Number not found.");
        free(v);
        return -1;
    }
    free(v);
    return 0;
}