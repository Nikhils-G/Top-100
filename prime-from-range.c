#include<stdio.h>
#include<math.h>

int check(int n)
{
    if(n < 2)
    {
        return 0; // Numbers less than 2 are not prime
    }

    // Check divisibility from 2 to sqrt(n)
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main()
{
    int a, b;
    printf("Enter the starting value: ");
    scanf("%d", &a);
    printf("Enter the ending value: ");
    scanf("%d", &b);
    
    printf("Prime numbers between %d and %d are: \n", a, b);
    for(int i = a; i <= b; i++)
    {
        if(check(i))
        {
            printf("%d ", i); // Print prime numbers
        }
    }
    printf("\n");
    return 0;
}
