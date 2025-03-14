#include <stdio.h>
#include<stdlib.h>
int qq(const void * a,const void *b )
{
    return (*(int*)a - *(int*)b);
}


double median(int arr[],int n)
{
    qsort(arr,n,sizeof(int),qq);
    if(n % 2 != 0)
    {
        return arr[n/2];
    }
    else
    {
        return (arr[n/2-1]+arr[n/2]/2);
    }
}

int main() 
{
    
    // Write C code here
    int arr[]={12,3,4,55,23,122,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("Median of the array: %.2f\n", median(arr, n));
}
