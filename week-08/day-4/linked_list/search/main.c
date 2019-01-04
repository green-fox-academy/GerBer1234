#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int value;
    struct node *next;
} node_t;

node_t *create_list();

void print_list(node_t *head);

node_t *search(node_t *head, int value);

int main() {
    int value = 0;
    node_t *head = NULL;
    head = create_list();
    print_list(head);
    printf("\nGive me an element: ");
    scanf("%d", &value);
    node_t *a = search(head, value);
    if (a != NULL) {
        printf("The pointer of the first node that stores the searched value is %p.", a);
        free(head);
    } else {
        printf("No node stores the searched value.");
    }
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
        int r = rand() % 10;
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

node_t *search(node_t *head, int value) {
    node_t *temp;
    for (temp = head; temp; temp = temp->next) {
        if (temp->value == value) {
            return temp;
        }
    }
    return NULL;
}