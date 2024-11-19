#include<stdio.h>
int main()
{
    int n,sum=0;
    
    do 
    {
        printf("enter a number:\n");
        scanf("%d",&n);
        sum = sum + n;
    }
    while(n>0);
    
    printf("the sum of the numbers entered is: %d",sum);
    
    return 0;
}