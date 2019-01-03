#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int value;
    struct node *next;
} node_t;

void empty(node_t *head);

int main() {
    node_t *head = NULL;
    empty(head);
    return 0;
}

void empty(node_t *head){
    if (head == NULL){
        printf("Empty.");
        exit (1);
    } else {
        printf("Not empty.");
        exit (0);
    }
}