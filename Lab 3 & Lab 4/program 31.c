#include<stdio.h>
int main()
{
    int num,q,sum=0;
    printf("enter number\n");
    scanf("%d",&num);
    
    while(num!=0)
    {
        q=(num%10);
        sum= sum+q;
        num= (num/10);
    }
    printf("%d",sum);
    
    return 0;
    
}