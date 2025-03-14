#include<stdio.h>
#include<limits.h>
int sec(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>min)
        {
            max= arr[i];
        }
    }
    
    return max;
}

int main()
{
    int n,arr[100];
    printf("n: ");
    scanf("%d",&n);
    printf("array elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=sec(arr,n);
    printf("%d",a);
    
}
