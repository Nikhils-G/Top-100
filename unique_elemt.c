// Online C compiler to run C program online
#include <stdio.h>
#define MAX 1000
int freq(int arr[],int n)
{
    int freq[MAX]={0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    int pp[n];
    int p;
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]] != 0)
        {
            pp[p++]=arr[i];
            freq[arr[i]]=0;
        }
    }
    for(int i=0;i<p;i++)
    {
        printf("%d ",pp[i]);
    }
}

int main()
{
    
    int arr[]={1,1,1,2,2,3,4,5,5,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    freq(arr,n);
    
    
    return 0;
}
