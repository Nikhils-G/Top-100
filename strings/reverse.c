#include<stdio.h>
#include<string.h>
void check(char str[])
{
        int i,len,temp;
        len=strlen(str);
        
        for(int i=0;i<len/2;i++)
        {
            temp=str[i];
            str[i]=str[len-i-1];
            str[len-i-1]=temp;
        }
}
int main()
{
    char str[]="takeuforward";
    check(str);
    puts(str);
}
