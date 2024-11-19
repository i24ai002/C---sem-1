#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("enter any positive number\n");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
        count = count + i;
        }
    }
    if(count <= num + 1)
    {
        printf("prime number");
    }
    else
    {
        printf("composite number");
    }
    
    return 0;
}