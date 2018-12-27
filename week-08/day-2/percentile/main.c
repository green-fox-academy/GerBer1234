#include <stdio.h>
#include <stdlib.h>

void sort(int *temp, int row, int column);

int percentile(const int *temp, int row, int column, int percent);

int main() {
    int row = 0;
    int column = 0;
    int num = 0;
    int g = 0;
    int percent = 0;
    printf("Give me a size of a matrix.\n");
    printf("Rows: ");
    scanf("%d", &row);
    printf("Columns: ");
    scanf("%d", &column);
    int *mem[row * column];
    for (int k = 0; k < row * column; ++k) {
        mem[k] = malloc(sizeof(int));
        if (mem[k] == NULL) {
            printf("Error! memory not allocated!");
            return -1;
        }
    }
    printf("Give me the elements of the matrix, please:");
    int *temp = malloc(row * column * sizeof(int));
    if (temp == NULL) {
        printf("Error! memory not allocated!");
        return -2;
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            scanf("%d", &num);
            mem[i][j] = num;
            temp[g] = mem[i][j];
            g++;
        }
    }
    sort(temp, row, column);
    do {
        printf("Give me a number to calculate the n-th percentile of the elements: ");
        scanf("%d", &percent);
        if (percent > 100 || percent < 0) {
            printf("Percentile should be between 0 and 100!\n");
        } else {
            printf("The %dth percentile of the elements is: %d\n", percent, percentile(temp, row, column, percent));
        }
    } while (percent > 100 || percent < 0);
    percent = 80;
    printf("The %dth percentile of the elements is: %d\n", percent, percentile(temp, row, column, percent));
    percent = 90;
    printf("The %dth percentile of the elements is: %d\n", percent, percentile(temp, row, column, percent));
    free(mem);
    free(temp);
    return 0;
}

void sort(int *temp, int row, int column) {
    for (int i = 0; i < row * column; i++) {
        for (int j = i + 1; j < row * column; ++j) {
            if (temp[i] > temp[j]) {
                int swap = temp[i];
                temp[i] = temp[j];
                temp[j] = swap;
            }
        }
    }
}

int percentile(const int *temp, int row, int column, int percent) {
    int percentile = temp[(int) (row * column * ((float) percent / 100.0))];
    return percentile;
}