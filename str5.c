#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello ", str2[] = "World!";
    strcat(str1, str2);
    printf("Concatenated: %s", str1);
    return 0;
}
