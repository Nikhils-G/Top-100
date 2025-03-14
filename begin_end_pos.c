#include <stdio.h>

// Function to insert an element at the beginning
void insertAtBeginning(int arr[], int *n, int element) {
    for (int i = *n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    (*n)++;
}

// Function to insert an element at the end
void insertAtEnd(int arr[], int *n, int element) {
    arr[*n] = element;
    (*n)++;
}

// Function to insert an element at a specific position
void insertAtPosition(int arr[], int *n, int element, int position) {
    if (position < 0 || position > *n) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*n)++;
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array
    int n = 5; // Initial size

    printf("Original array: ");
    printArray(arr, n);

    // Insert at the beginning
    insertAtBeginning(arr, &n, 10);
    printf("After inserting 10 at the beginning: ");
    printArray(arr, n);

    // Insert at the end
    insertAtEnd(arr, &n, 20);
    printf("After inserting 20 at the end: ");
    printArray(arr, n);

    // Insert at a specific position (index 3)
    insertAtPosition(arr, &n, 15, 3);
    printf("After inserting 15 at position 3: ");
    printArray(arr, n);

    return 0;
}
