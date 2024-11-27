#include <stdio.h>

int main() 
{
    int arr[5],brr[5];
    printf("enter the elements of array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int *ptra = &arr;
    int *ptrb = &brr;

    for (int i=0;i<5;i++) 
    {
        *(ptrb + i) = *(ptra + i); 
    }

    printf("Elements of another array after copying of elements: ");
    for (int i=0;i<5;i++) 
    {
        printf("%d ", brr[i]);
    }
    printf("\n");

    return 0;
}
