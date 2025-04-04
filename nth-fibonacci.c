#include <stdio.h>

long long int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}


int main() {
    int n;
    printf("Enter the term number n to find the Fibonacci number: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci number is: %lld\n", n, fibonacci(n));

    return 0;
}
