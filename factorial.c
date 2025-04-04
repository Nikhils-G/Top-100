#include<stdio.h>
int main ()
{
    int num = 0, fact = 1;
    
    if(num < 0)
        printf("Error");
    else
    {
        for(int i = 1; i <= num; i++)
            fact = fact * i;
    }
    
    printf("Fact %d: %d",num, fact);
}
