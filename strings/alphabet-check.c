// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main() 
{
    
    char c='0';
    if((c>='a' && c<='z') || (c>='A' && c<= 'Z' ) ){
        printf("yes %c is a alphabet ",c);
    }
    else
    {
        printf("NO");
    }
  
    return 0;
}
