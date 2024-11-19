#include<stdio.h>
int main()
{
    int arr[3][3],brr[3][3];
    printf("enter the elements of the array:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }    
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",brr[i][j]);
        }    
        printf("\n");
    }
    
    
return 0;
} 