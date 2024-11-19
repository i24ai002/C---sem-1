#include<stdio.h>
int main()
{
    int n;
    float x;
    printf("enter the amount of units:\n");
    scanf("%d",&n);
    
    if(n>0 && n<=200)
    {
    x = (n*0.5);
    printf("the amount to be paid is: %f",x);
    }
    
    else if(n>200 && n<=400) 
    {x = 100 + (n-200)*0.65;
    printf("the amount to be paid is: %f",x);
    }
    
    else if(n>400 && n<=600)
    {
        x = 230 + (n-400)*0.8;
        printf("the amount to be paid is: %f",x);
    }
    
    else
    {
        x = 425 + (n-600)*1.25;
        printf("the amount to be paid is: %f",x);
    }
    
    return 0;
    }