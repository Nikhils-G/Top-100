#include <stdio.h>
#include <limits.h>

int maxProductSubarray(int arr[], int n) {
    int maxProduct = INT_MIN;
    int currProduct = 1;

    
    for (int i = 0; i < n; i++) {
        currProduct *= arr[i];
        if (currProduct > maxProduct) {
            maxProduct = currProduct;
        }
        if (currProduct == 0) {
            currProduct = 1; // Reset if zero is encountered
        }
    }

    
    currProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        currProduct *= arr[i];
        if (currProduct > maxProduct) {
            maxProduct = currProduct;
        }
        if (currProduct == 0) {
            currProduct = 1;
        }
    }

    return maxProduct;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Test case
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxProductSubarray(arr, n);
    printf("Maximum Product Subarray: %d\n", result);

    return 0;
}
