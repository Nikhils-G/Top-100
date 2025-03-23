#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello", temp;
    int len = strlen(str);
    
    for(int i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed: %s", str);
    return 0;
}
