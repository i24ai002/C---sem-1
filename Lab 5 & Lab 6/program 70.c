#include<stdio.h>
int main()
{
    int n,element,count,occur;
    printf("enter the index of the array: ");
    scanf("%d",&n);
    printf("enter the elements for the array\n");
    
    int arr[n];
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]);
    }
    
    printf("enter the element you want to check for occurence: ");
    scanf("%d",&element);
    
    for(int i=0;i<n;i++)
    { 
        if(element == arr[i])
        {
            count++;
        }    
            
    }
    
    printf("the occurence of %d in the given array is %d",element,count);
    
    return 0;    
}
