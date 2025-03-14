#include <stdio.h>
#include <limits.h>

int findSecondMin(int arr[], int size) {
    if (size < 2) {
        return -1;
    }
    int small = INT_MAX, second_small = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < small) {
            second_small = small;
            small = arr[i];
        } else if (arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }
    }
    return second_small;
}

int findSecondMax(int arr[], int size) {
    if (size < 2) {
        return -1;
    }
    int large = INT_MIN, second_large = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        } else if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }
    return second_large;
}

int main() {
    int arr[] = {1, 2, 4, 7, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int secondMin = findSecondMin(arr, size);
    int secondMax = findSecondMax(arr, size);
    
    printf("Second smallest is %d\n", secondMin);
    printf("Second largest is %d\n", secondMax);
    
    return 0;
}
