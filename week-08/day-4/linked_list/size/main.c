#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int value;
    struct node *next;
} node_t;

node_t *create_list();

int size(node_t *head);

int main() {
    node_t *head = NULL;
    head = create_list();
    printf("The size of the list is %d.",size(head));
    free(head);
    return 0;
}

node_t *create_list() {
    srand((unsigned int) time(NULL));
    node_t *head = NULL;
    node_t *temp = NULL;
    node_t *pos = NULL;
    int n = rand() % 20;
    for (int i = 0; i < n; ++i) {
        temp = malloc(sizeof(node_t));
        if (temp == NULL) {
            printf("Error! memory not allocated.");
            exit(-1);
        }
        int r = rand() % 20;
        temp->value = r;
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
        } else {
            pos = head;
            while (pos->next != NULL) {
                pos = pos->next;
            }
            pos->next = temp;
        }
    }
    return head;
}

int size(node_t *head) {
    int counter = 0;
    node_t* pos = head;
    while(pos != NULL){
        pos = pos->next;
        counter++;
    }
    return counter;
}