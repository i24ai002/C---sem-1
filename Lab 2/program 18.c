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
    a>=b && a>=c ? printf("max=%d",a) :printf("");
    b>=a && b>=c ? printf("max=%d",b) :printf("");
    c>=a && c>=b ? printf("max=%d",c) :printf("");
    
    return 0;
    
}