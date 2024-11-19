#include<stdio.h>
int main()
{
    int n;
    printf("enter any positive number\n");
    scanf("%d",&n);
    printf("%d", isprime(n));
    return 0;
}

int isprime(int n)
{
    int count=0;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count = count + 1;
        }
    }
    if(count <= 2)
    {
        return 0;
    }
    else
    {
       return 1;
    }
    
}