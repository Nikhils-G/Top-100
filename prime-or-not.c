#include <stdio.h>
#include <math.h>

void check(int n) {
    if (n <= 1) {
        printf("%d is not a prime number\n", n);
        return;
    }

    int is_prime = 1; // Assume it's prime until we find a divisor
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            is_prime = 0; // Found a divisor, so it's not prime
            break;
        }
    }

    if (is_prime) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
}

int main() {
    int n;
    printf("Enter the n value: ");
    scanf("%d", &n);
    check(n);
    return 0;
}
