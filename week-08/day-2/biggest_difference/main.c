#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Make sure you have a separate function that reads the data and returns it.

// Once you have the data write functions for the following questions:
// Which class has the biggest difference between the worst and best exam and how much is the difference?
// Which class has the best exam?
// What is the average of all the exams?
void data();

int main() {
    data();
    return 0;
}

void data(){
    int N = 0;
    int M = 0;
    char name[50];
    int exam = 0;
    printf("How many classes took the exam?\n");
    scanf("%d", &N);
    int *result = calloc((size_t) M, sizeof(int));
    char *cname = malloc(N * sizeof(char) + strlen(name));
    for (int j = 0; j < N; ++j) {
        printf("How many students took the exam in the %d. class?", j + 1);
        scanf("%d", &M);
        printf("Name of the %d. class:\n", j + 1);
        scanf("%s", name);
        strcpy(&cname[j], name);
        for (int i = 0; i < M; ++i) {
            printf("%d. student exam result in percentage:", i + 1);
            scanf("%d", &exam);
            result[0] = exam;
        }
    }
}