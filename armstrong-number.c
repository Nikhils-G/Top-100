#include<stdio.h>
#include<math.h>

int main()
{
    int n = 1634;  // Initial number
    int original_n = n;  // Save the original value of n for later
    int count = 0;
    
    // Count the number of digits in n
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    
    n = original_n;
    
    
    int product = 0;
    while (n != 0)
    {
        int rem = n % 10;
        product += pow(rem, count);  
        n /= 10;
    }

    if(product ==  original_n)
    {
        printf("armstrong number");
    }
    else
    {
        printf("No");
    }
    return 0;
}
