#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int value;
    struct node *next;
} node_t;

node_t *create_list();

void print_list(node_t *head);

int remove_e(node_t **head, int value);

int main() {
    int value = 0;
    node_t *head = NULL;
    head = create_list();
    print_list(head);
    printf("\nGive me an element: ");
    scanf("%d", &value);
    int a = remove_e(&head,value);
    if(a==1){
        printf("\n%d deleted element.\n",a);
        printf("New list: ");
        print_list(head);
    } else if(a>1){
        printf("\n%d deleted elements.\n",a);
        printf("New list: ");
        print_list(head);
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

int remove_e(node_t **head, int value) {
    int counterh = 0;
    int counterl = 0;
    node_t *temp = *head;
    node_t *pos;
    while (temp != NULL && temp->value == value) {
        *head = temp->next;
        free(temp);
        temp = *head;
        counterh++;
    }
    while (temp != NULL) {
        while (temp != NULL && temp->value != value) {
            pos = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            return counterl+counterh;
        }
        pos->next = temp->next;
        free(temp);
        temp = pos->next;
        counterl++;
    }
}