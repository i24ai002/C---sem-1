#include<stdio.h>
int main()
{
    int arr[3][3],max,min;
    printf("enter the elements of 3*3 matrix\n");
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    
    max = arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(max < arr[i][j])
            {
                max= arr[i][j];
            }
            
        }
    }    
    
    min = arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(min > arr[i][j])
            {
                min= arr[i][j];
            }
            
        }
    }
    
    printf("the maximum element of the matrix is: %d",max);
    printf("\nthe minimum element of the matrix is: %d",min);

        
    return 0;    
}
