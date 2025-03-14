#include <stdio.h>
#include <limits.h>

int product(int arr[], int n) {
    int max = INT_MIN;  

    for (int i = 0; i < n; i++) {  // Start from 0
        for (int j = i; j < n; j++) {  // Start from i, not 1
            int pro = 1;
            for (int k = i; k <= j; k++) {  
                pro *= arr[k];  
            }
            if (pro > max) {  
                max = pro;  
            }
        }
    }
    return max;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int a = product(arr, n);  
    printf("Maximum product subarray: %d\n", a);  

    return 0;
}
