#include<stdio.h>

int main ()
{
    int num, sum = 0;
 
    num = 111;
    printf("The number is = %d\n",num);
    int temp;
    temp=num;
    int rev=0;
    while(temp!=0){
        int rem= temp%10;
        rev =  rev * 10 + rem;
        temp = temp / 10;
    }
    if(num==rev)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
 
    return 0;

}
