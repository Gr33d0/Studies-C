#include <stdio.h>

void insertionSort(int A[], int n) {
    int key, i, j;
    for (i = 1; i < n; i++) {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}

int main() {
    int array[] = {12, 8, 2, 3, 6, 66, 7, 8, 1, 9, 11, 13, 15, 76, 92, 32, 15, 7, 3, 0};
    int length = sizeof(array) / sizeof(array[0]);

    insertionSort(array, length);

    printf("Sorted array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
