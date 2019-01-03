#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node_t;

node_t *create_list();

void print_list(node_t *head);

void insert(node_t **head, int value, int num);

int main() {
    int value = 0;
    int num = 0;
    node_t *head = NULL;
    head = create_list();
    printf("Give me the new element: ");
    scanf("%d", &value);
    printf("Where would you like to insert it?");
    scanf("%d", &num);
    insert(&head, value, num);
    print_list(head);
    free(head);
    return 0;
}

node_t *create_list() {
    node_t *head = NULL;
    node_t *temp = NULL;
    node_t *pos = NULL;
    for (int i = 0; i < 5; ++i) {
        temp = malloc(sizeof(node_t));
        if (temp == NULL) {
            printf("Error! memory not allocated.");
            exit(-1);
        }
        temp->value = i * 2;
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

void insert(node_t **head, int value, int num) {
    int counter = 0;
    node_t *pos = *head;
    while (pos != NULL) {
        pos = pos->next;
        counter++;
    }
    if (num < 0) {
        printf("Your insertion number is too low. Next time give a positive number.\n");
        pos = malloc(sizeof(node_t));
        if (pos == NULL) {
            printf("Error! memory not allocated.");
            exit(-1);
        }
        pos->value = value;
        pos->next = *head;
        *head = pos;
    } else if (num < counter) {
        pos = *head;
        while (pos->value != num) {
            pos = pos->next;
        }
        node_t *temp = malloc(sizeof(node_t));
        if (temp == NULL) {
            printf("Error! memory not allocated.");
            exit(-1);
        }
        temp->value = value;
        temp->next = pos->next;
        pos->next = temp;
    } else {
        printf("Your insertion number is too high. Next time give less than %d.\n", counter);
        pos = *head;
        while (pos->next != NULL) {
            pos = pos->next;
        }
        pos->next = malloc(sizeof(node_t));
        if (pos->next == NULL) {
            printf("Error! memory not allocated.");
            exit(-1);
        }
        pos->next->value = value;
        pos->next->next = NULL;
    }
}