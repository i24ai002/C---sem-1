#include<stdio.h>
int main()
{
    int sales;
    float x;
    printf("enter the amount of sales:\n");
    scanf("%d",&sales);
    
    if(sales<=500)
    {
    x = (sales*0.05);
    printf("the commission amount is: %f",x);
    }
    
    else if(sales>500 && sales<=2000) 
    {x = 35 + (sales-500)*0.1;
    printf("the commission amount is: %f",x);
    }
    
    else if(sales>2000 && sales<=5000)
    {
        x = 185 + (sales-2000)*0.12;
        printf("the commission amount is: %f",x);
    }
    
    else
    {
        x = (sales*0.125);
        printf("the commission amount is: %f",x);
    }
    
    return 0;
    }