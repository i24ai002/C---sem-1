#include<stdio.h>
int main()
{
    int i,n,a=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         a=i*a;
         printf("(%d/%d)",i,a);
         
         if(i<n)
         {
             printf("+");
         }
     }
     
     return 0;
}