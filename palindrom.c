#include <stdio.h>

int main() {
    int num, rev = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if (rev == num)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}
