#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    
    // Array to track if a vowel has been encountered
    int vowelsFound[5] = {0};  // a, e, i, o, u
    int count = 0;

    // Loop through the string
    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;   
            
            if (ch == 'a' && !vowelsFound[0]) {
                vowelsFound[0] = 1;
                count++;
            }
            else if (ch == 'e' && !vowelsFound[1]) {
                vowelsFound[1] = 1;
                count++;
            }
            else if (ch == 'i' && !vowelsFound[2]) {
                vowelsFound[2] = 1;
                count++;
            }
            else if (ch == 'o' && !vowelsFound[3]) {
                vowelsFound[3] = 1;
                count++;
            }
            else if (ch == 'u' && !vowelsFound[4]) {
                vowelsFound[4] = 1;
                count++;
            }
        }
    }

    printf("Number of unique vowels: %d\n", count);
    return 0;
}
