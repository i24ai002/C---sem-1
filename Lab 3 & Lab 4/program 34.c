#include<stdio.h>
int main()
{
    int a=0,b=1,c;
    printf("%d",a);
    printf("\t%d",b);
    
    for(int i=1;i<=10;i++)
    {
        c = a + b;
        printf("\t%d",c);
        a=b;
        b=c;
    }    
    return 0;
}