#include<stdio.h>
int main()
{
    int n=1002;
    int ex=2;
    long  p=1;
    while(ex !=0)
    {
        p *= n;
        ex--;
    }
    
    printf("%ld",p);
    return 0;
}
