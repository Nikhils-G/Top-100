#include <stdio.h>

int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n =145 ;
    int temp = n;
    int p=0;
    while(temp != 0)
    {
        int rem = temp % 10;
        p += fact(rem);
        temp /=10;
    }
    
    if(p==n)
    {
        printf("strong number");
    }
    else
    {
        printf("not-strong-number");
    }
    return 0; 
    
    
}
