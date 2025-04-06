#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter the string : ");
    scanf("%s",str);
    char result[100],j=0;
    for(int i=0;str[i] != '\0' ;i++)
    {
        if((str[i]>='a' && str[i]<='z') || str[i]>='A' && str[i]<='Z' )
        {
            result[j++]=str[i];
        }
    }
    result[j]='\0';

    puts(result);
}
