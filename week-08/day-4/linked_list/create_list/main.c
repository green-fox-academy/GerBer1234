#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node_t;

node_t *create_list(int num);

void print_list(node_t *head);

int main() {
    node_t *head = NULL;
    int num;
    printf("Number of the elements:");
    scanf("%d", &num);
    head = create_list(num);
    print_list(head);
    free(head);
    return 0;
}

node_t *create_list(int num) {
    node_t *head = NULL;
    node_t *temp = NULL;
    node_t *pos = NULL;
    for (int i = 0; i < num; ++i) {
        temp = malloc(sizeof(node_t));
        if (temp == NULL) {
            printf("Error! memory not allocated.");
            exit(-1);
        }
        printf("Enter %d element:", i + 1);
        scanf("%d", &temp->data);
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
    node_t* pos = head;
    printf("Elements of the list:");
    while (pos != NULL) {
        printf("%d\t", pos->data);
        pos = pos->next;
    }
}