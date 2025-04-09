#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    if (num <= 1) return 0; // Not prime if less than or equal to 1
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not prime if divisible by any number from 2 to sqrt(num)
        }
    }
    return 1; // Prime if no divisors found
}

int main() {
    int n, m;
    printf("Enter dimensions n and m:\n");
    scanf("%d", &n);
    scanf("%d", &m);

    int arr[1000];
    int i;
    printf("Enter %d elements:\n", m * n);
    for(i = 0; i < m * n; i++) {
        scanf("%d", &arr[i]);
    }

    int p1[100], q1 = 0;
    for(int i = 0; i < m * n / 2; i++) {
        p1[q1++] = arr[i];
    }
    
    int p2[100], q2 = 0;
    for(int i = m * n / 2; i < m * n; i++) {
        p2[q2++] = arr[i];
    }
    
    int count = 0;
    for(int z = 0; z < q1; z++) {
        if(is_prime(p1[z])) {
            count++;
        }
    }

    for(int x = 0; x < q2; x++) {
        if(is_prime(p2[x])) {
            count++;
        }
    }

    if(count > 2) {
        printf("valid");
    } else {
        printf("not valid");
    }

    return 0;
}
