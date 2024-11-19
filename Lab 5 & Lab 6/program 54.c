#include<stdio.h>
int main()
{
    int a[10],sum=0;
    for(int i=0;i<10;i++)
    {
        printf("enter the number\n");
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("the sum of all the numbers entered is: %d",sum);
    
    return 0;
}