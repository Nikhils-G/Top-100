#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char str[100];
    printf("enter the string = ")
    fgets(str,sizeof(str),stdin)
    
    int freq[256]={0};
    
    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i] >='A' && str[i] <='Z')
        {
            str[i]=tolower(str[i]);
        }
         freq[str[i]]++;
    }
    
    for(int i=0;i<256;i++)
    {
        if(freq[i] != 0)
        {
            printf("%c is occured %d\n" , i, freq[i]);
        }
    }
    

    return 0;
}
