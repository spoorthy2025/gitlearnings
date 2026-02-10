#include <stdio.h>

void bubbleSort(int arr[], int n, long long *comparisons) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {

        for (j = 0; j < n - i - 1; j++) {
            (*comparisons)++;
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long comparisons = 0;

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n, &comparisons);

    printf("Sorted array: \n");
    printArray(arr, n);

    printf("Number of comparisons made: %lld\n", comparisons);

    return 0;
}
