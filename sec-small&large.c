#include<stdio.h>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}



void selection(int arr[],int n)
{
    int i,j, min;
    for (int i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
            {
                min=j;
            }
        }
        swap(&arr[min],&arr[i]);
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
    selection(arr,n);
    display(arr,n);
    printf("\n");
    printf("%d\n",arr[1]);
    printf("%d",arr[n-2]);
    return 0;
}

