#include<stdio.h>
int main()
{
    int n,i,evensum=0,oddsum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        oddsum= oddsum + i;
    
        else
        evensum= evensum + i;
    }
    printf("sum of all odd numbers= %d\n",oddsum);
    printf("sum of all even numbers= %d\n",evensum);
        
        return 0;
    
}