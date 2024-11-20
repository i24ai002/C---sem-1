#include<stdio.h>
int fib(int n);
void main()
{
    int n;
    printf("enter number of terms");
    scanf("%d",&n);
    fib(n);  
}

int fib(int n)
{
    int a=0,b=1,next;
    printf("%d\t",a);
    printf("%d\t",b);
    for(int i=2;i<=n;i++)
    {
        next=a+b;
        printf("%d\t",next);
        a=b;
        b=next;
    }
}
