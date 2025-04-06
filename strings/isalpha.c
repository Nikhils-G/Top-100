#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("enter the string : ");
    scanf("%s",str);
    char result[100],j=0;
    for(int i=0;str[i] != '\0' ;i++)
    {
        if(isalpha(str[i]))
        {
            result[j++]=str[i];
        }
    }
    result[j]='\0';

    puts(result);
}
