#include<stdio.h>
int rev(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start ++;
        end --;
    }
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[]={12,3,4,112,40,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    rev(arr,n);
    display(arr,n);
    return 0;
}

