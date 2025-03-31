#include <stdio.h>
#include<math.h>
int prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n % i==0)
        {
            return 0;
        }
    }
    
    return 1;
}
int main()
{
    int a=5;
    int b=20;
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        {
            sum += i;
        }
    }
    printf("%d",sum);

    return 0;
}
