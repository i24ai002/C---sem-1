#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter original values of a and b");
    scanf("%d%d",&a,&b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("The value of a and b after swapping is %d %d respectively.",a,b);
    return 0;
}