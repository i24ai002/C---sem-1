#include <stdio.h>

int main() 
{
    int n,*ptr,max;
    printf("enter the number of integers you want to check greatest from:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the numbers:\n");
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]);
    }
        ptr = arr;

    for(int i=0;i<n;i++)
    {
        max = *ptr;
        if(max < *(ptr+i))
        { 
            max = *(ptr+i);
        }
        
    }
    printf("the greatest of all numbers is %d",max);

    return 0;
}
