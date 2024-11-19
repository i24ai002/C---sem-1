#include<stdio.h>
int main()
{
    int positivecount=0,negativecount=0,zerocount=0,arr[10],i;
    printf("enter the elements:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]<0)
        {
            negativecount++; 
        }
        else if(arr[i]>0)
        {
            positivecount++;
        }
        else
        {
            zerocount++;
        }
    }
    printf("the total number of positive elements are: %d",positivecount);
    printf("\nthe total number of negative elements are: %d",negativecount);
    printf("\nthe total number of zero elements are: %d",zerocount);
    
    return 0;
}