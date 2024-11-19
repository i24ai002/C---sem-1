#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],i,temp;
    
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
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    
    for(i=0;i<10;i++)
    {
    printf("%d",arr1[i]);
    }    
    
    printf("\n");
    
    for(i=0;i<10;i++)
    {
    printf("%d",arr2[i]);
    } 

    return 0;
}