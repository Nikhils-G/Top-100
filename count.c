#include<stdio.h>
#include<math.h>
int main()
{
    int n = 16340000;  // Initial number
    int count=0;
    
    while (n != 0)
    {
        
        count++;
        n /= 10;
    }
    
   
    printf("%d",count);
    
    return 0;
}
