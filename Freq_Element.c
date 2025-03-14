#include<stdio.h>
#define MAX 1000
int freq(int arr[],int n)
{
    int freq[MAX]={0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]] != 0)
        {
            printf("%d element occured %d time's\n" , arr[i],freq[arr[i]]);
            freq[arr[i]]=0;
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Element frequency:\n");
    
    freq(arr, size);


    return 0;
    
    
}
