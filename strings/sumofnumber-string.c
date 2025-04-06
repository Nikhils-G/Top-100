#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("enter the string : ");
    fgets(str,sizeof(str),stdin);
    
    int sum=0;
    for(int i=0;str[i] != '\0' ;i++)
    {
        if(str[i] >='1' && str[i] <= '9')
        {
            sum += (str[i]-'0');
        }
    }
    printf("%d",sum);
}
