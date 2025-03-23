#include <stdio.h>
#include <string.h>

void encrypt(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(i % 2 == 0)  
            str[i] += 3;  // Shift even index characters by +3
        else 
            str[i] -= 2;  // Shift odd index characters by -2
    }
}

void decrypt(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(i % 2 == 0)  
            str[i] -= 3;  // Reverse shift for even index
        else 
            str[i] += 2;  // Reverse shift for odd index
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    encrypt(str);
    printf("Encrypted: %s\n", str);

    decrypt(str);
    printf("Decrypted: %s\n", str);

    return 0;
}
