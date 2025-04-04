#include<stdio.h>

int main()
{
    int n = 10;
    int a=0,b=1;
    int next;
    printf("%d,%d",a,b);
    for(int i=2;i<n;i++)
    {
        next=a+b;
        a=b;
        b=next;
        printf(",%d",next);
    }

    return 0;
}
