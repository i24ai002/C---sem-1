#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter num1 ");
    scanf("%d",&a);
    printf("enter num2 ");
    scanf("%d",&b);
    printf("enter num3 ");
    scanf("%d",&c);
    
    if((a>=b) && (a>=c))
    {
        printf("%d is the largest",a);
    }
    else if((b>=a) && (b>=c))
    {
        printf("%d is the largest",b);
    }
    else
    {
        printf("%d is the largest",c);
    }
    return 0;
    
}