#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello", str2[20];
    strcpy(str2, str1);
    printf("Copied string: %s", str2);
    return 0;
}
