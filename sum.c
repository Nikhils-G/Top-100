// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    
    // Write C code here
    int arr[]={12,3,4,55,23,122,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    
    printf("%d",sum);


    return 0;
}
