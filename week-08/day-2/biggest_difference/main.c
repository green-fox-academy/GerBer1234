#include <stdio.h>
#include <stdlib.h>


// You need to repeat this N times.
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
    float exam = 0;
    printf("How many classes took the exam?\n");
    scanf("%d", &N);
    for (int j = 0; j < N; ++j) {
        printf("How many students took the exam in the %d. class?",j+1);
        scanf("%d", &M);
        float *result = calloc((size_t) M, sizeof(int));
        printf("Name of the %d. class:\n",j+1);
        scanf("%s", name);
        for (int i = 0; i < M; ++i) {
            printf("%d. student exam result in percentage:", i + 1);
            scanf("%f", &exam);
            result[i] = exam;
        }
    }
}