#include <iostream>
#include <algorithm>

void printDistinct(int arr[], int n);

int main() {
    int arr[] = {1, 11, 34, 11, 52, 61, 1, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    printDistinct(arr, n);
    return 0;
}

void printDistinct(int arr[], int n) {
    // Pick all elements one by one
    for (int i = 0; i < n; i++) {
        // Check if the picked element is already printed
        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // If not printed earlier, then print it
        if (i == j)
            std::cout << arr[i] << " ";
    }
}