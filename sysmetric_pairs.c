#include <stdio.h>

void findSymmetricPairs(int arr[][2], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0]) {
                printf("(%d, %d) ", arr[i][0], arr[i][1]);
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Symmetric pairs: ");
    findSymmetricPairs(arr, n);

    return 0;
}
