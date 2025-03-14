#include <stdio.h>
#define MAX 1000

void printRepeatingElements(int arr[], int n) {
    int freq[MAX] = {0};  // Frequency array

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1) {  
            printf("%d ", arr[i]);
            freq[arr[i]] = 0;  
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 4, 5, 5, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printRepeatingElements(arr, n);

    return 0;
}
