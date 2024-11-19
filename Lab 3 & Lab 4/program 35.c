#include<stdio.h>
int main()
{
    int num,sum,i;
    printf("enter any number:\n");
    scanf("%d",&num);
    
    while(num>=9)
    {
        sum = 0;
        while(num>0)
        {
            i = num%10;
            sum = sum + i;
            num = num/10;
        }
        num = sum;
    }
        printf("the sum of digits of the number is: %d",sum);

    return 0;
}