#include <stdio.h>
int main()
{
    int n,i,a;
    printf("enter the value of n\n");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
         a=(i*i);
        printf("%d\n",a);
    }
  
    return 0;
}