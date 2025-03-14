#include <stdio.h>

int findSmallestElement(int arr[], int size) {
    int min = arr[0]; // Assume the first element is the smallest
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int smallest = findSmallestElement(arr, size);
    printf("%d\n", smallest);
    
    return 0;
}
