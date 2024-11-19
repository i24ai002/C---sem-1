#include<stdio.h>
int main()
{
    int arr[3][3],brr[3][3],res[3][3];
   
    printf("enter the elements of array1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    
    printf("enter the elements of array2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&brr[i][j]);
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            res[i][j]=0;
            for(int k=0;k<3;k++)
            {
                res[i][j] += arr[i][k]*brr[k][j];
            }
        }
        
    }
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf("%d ",res[i][j]);
         }
         printf("\n");
     }
    
    
    
    return 0;
    
}