#include<stdio.h>
int main()
{
    int oddcount=0,evencount=0,arr[10],i;
    printf("enter the elements:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            evencount++; 
        }
        else
        {
            oddcount++;
        }
    }
    printf("the total number of odd elements are: %d",oddcount);
    printf("\nthe total number of even elements are: %d",evencount);
    
    return 0;
}