#include <stdio.h>

int main()
{
    int a,b,x;
    printf("Enter original values of a and b");
    scanf("%d%d",&a,&b);
    x=a;
    a=b;
    b=x;
    printf("The value of a and b after swapping is %d %d respectively.",a,b);
    return 0;
}