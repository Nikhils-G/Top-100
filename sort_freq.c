#include <stdio.h>
#include <stdlib.h>

// Function to swap elements in a 2D array
void swap(int arr[2][100], int i, int j) {
    int temp1 = arr[0][i];
    arr[0][i] = arr[0][j];
    arr[0][j] = temp1;

    int temp2 = arr[1][i];
    arr[1][i] = arr[1][j];
    arr[1][j] = temp2;
}

// Function to sort 2D array by frequency
void sort2darray(int arr[2][100], int k) {
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - 1 - i; j++) {
            if (arr[1][j] < arr[1][j + 1]) {
                swap(arr, j, j + 1);
            }
        }
    }
}

// Function to sort elements of array by frequency
void sortByFrequency(int arr[], int n) {
    // Step 1: Sort the array
    qsort(arr, n, sizeof(int), (int (*)(const void *, const void *))strcmp);

    // Step 2: Create a 2D array to store elements and frequencies
    int arr2d[2][100];
    int k = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            arr2d[0][k] = arr[i];
            count = 1;
        } else if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            arr2d[1][k] = count;
            count = 1;
            k++;
            arr2d[0][k] = arr[i];
        }
    }
    arr2d[1][k] = count;
    k++;

    // Step 3: Sort the 2D array by frequency
    sort2darray(arr2d, k);

    // Step 4: Store sorted values in the original array
    k = 0;
    int i = 0;
    while (i < n) {
        while (arr2d[1][k] > 0) {
            arr[i] = arr2d[0][k];
            i++;
            arr2d[1][k]--;
        }
        k++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortByFrequency(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
