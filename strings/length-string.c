// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main() 
{
    
    char str[100];
    int i,length=0;
    printf("enter the string = ");
    scanf("%s",str);
    
    for(i=0;str[i] !='\0'; i++)
    {
        length++;
    }
    
    printf("%d",length);
    
    return 0;
}
