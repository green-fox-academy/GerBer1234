#include <stdio.h>

int get_fibonacci_number(int n);

int main() {
    printf("%d\n", get_fibonacci_number(-5));
    printf("%d\n", get_fibonacci_number(0));
    printf("%d\n", get_fibonacci_number(5));
    printf("%d\n", get_fibonacci_number(10));
    printf("%d\n", get_fibonacci_number(15));
    printf("%d\n", get_fibonacci_number(20));
    return 0;
}

int get_fibonacci_number(int n) {
    int first = 0, second = 1, next = 0, c = 0;
    if (n == 0) {
        return 0;
    } else if (n< 0){
        return -1;
    } else {
        for (c = 0; c < n; c++) {
            if (c <= 1)
                next = c;
            else {
                next = first + second;
                first = second;
                second = next;
            }
        }
    }
    return next;
}