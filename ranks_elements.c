#include <stdio.h>

void findRanks(int arr[], int n) {
    for(int i=0;i<n;i++)
    {
        int rank=1;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                rank++;
            }
        }
        printf("%d ",rank);
    }
}

int main() {
    int arr[] = {20, 15, 26, 2, 98, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    findRanks(arr, n);

    return 0;
}
