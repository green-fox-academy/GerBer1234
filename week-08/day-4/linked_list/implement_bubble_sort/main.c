#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int value;
    struct node *next;
} node_t;

node_t *create_list();

void print_list(node_t *head);

node_t *sort(node_t *head);

int main() {
    node_t *head = NULL;
    head = create_list();
    printf("Original list: ");
    print_list(head);
    sort(head);
    printf("\nSorted list: ");
    print_list(head);
    free(head);
    return 0;
}

node_t *create_list() {
    srand((unsigned int) time(NULL));
    node_t *head = NULL;
    node_t *temp = NULL;
    node_t *pos = NULL;
    for (int i = 0; i < 5; ++i) {
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

void print_list(node_t *head) {
    node_t *pos = head;
    while (pos != NULL) {
        printf("\t%d\t", pos->value);
        pos = pos->next;
    }
}

node_t *sort(node_t *head) {
    int swap = 0;
    node_t *temp;
    while (swap != 1) {
        swap = 1;
        temp = head;
        while (temp->next != NULL) {
            if (temp->value > temp->next->value) {
                swap = 0;
                int tmp = temp->value;
                temp->value = temp->next->value;
                temp->next->value = tmp;
            }
            temp = temp->next;
        }
    }
    return head;
}