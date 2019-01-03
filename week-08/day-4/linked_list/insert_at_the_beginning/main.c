#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int value;
    struct node *next;
} node_t;

node_t *create_list();

void print_list(node_t *head);

void push_front(node_t **head, int value);

int main() {
    int value = 0;
    node_t *head = NULL;
    head = create_list();
    printf("Give me the new element: ");
    scanf("%d", &value);
    push_front(&head, value);
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
        printf("%d\t", pos->value);
        pos = pos->next;
    }
}

void push_front(node_t **head, int value) {
    node_t *pos = malloc(sizeof(node_t));
    if (pos == NULL) {
        printf("Error! memory not allocated.");
        exit(-1);
    }
    pos->value = value;
    pos->next = *head;
    *head = pos;
}