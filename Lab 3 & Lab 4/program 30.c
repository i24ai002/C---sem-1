#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a number\n");
    scanf("%d",&num);
    
    while(num!=0)
    {
        i = (num%10);
        printf("%d",i);
        num = (num/10);
    }
    return 0;
}