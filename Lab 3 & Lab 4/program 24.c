#include<stdio.h>
int main()
{
    int n,x,y;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the value of x\n");
    scanf("%d",&x);
    
    if(n==1)
    {
        y = 1 + x;
        printf("y = %d",y);
    }
    else if(n==2)
    {
        y = 1 + (x/n);
        printf("y = %d",y);
    }
    else if(n==3)
    {
        y = 1 + (x^n);
        printf("y = %d",y);
    }
    else
    {
        y = 1 + (n*x);
        printf("y = %d",y);
    }
    return 0;
}