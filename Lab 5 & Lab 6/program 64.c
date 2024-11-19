#include<stdio.h>
int main()
{
    int arr[3][3],row0,row1,row2;
    printf("enter the elements of the array:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }    
    
    row0= arr[0][0]+arr[0][1]+arr[0][2];
    row1= arr[1][0]+arr[1][1]+arr[1][2];
    row2= arr[2][0]+arr[2][1]+arr[2][2];
    
    printf("\nthe sum of 1st row is: %d",row0);
    printf("\nthe sum of 2nd row is: %d",row1);
    printf("\nthe sum of 3rd row is: %d",row2);
    
    
return 0;
} 