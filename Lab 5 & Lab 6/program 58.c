#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],sum[10],i;
    
    printf("enter the elements of array 1:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&arr1[i]);
    }
    
    printf("enter the elements of array 2:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&arr2[i]);
    }
    
    for(i=0;i<10;i++)
    {
        sum[i]= arr1[i] + arr2[i];
    }
    
    for(i=0;i<10;i++)
    {
    printf("\n%d\n",sum[i]);
    }

    return 0;
}