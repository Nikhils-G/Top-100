// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main() 
{
    
    char c='a';
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
    c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("% c is vowel",c);
    }
    else
    {
        printf("%c is consonant", c);
    }
  
    return 0;
}
