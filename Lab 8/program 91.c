#include <stdio.h>
int main() 
{
    int num,square,cube;
    printf("enter a number: ");
    scanf("%d", &num);
    int *ptr = &num;
    
    square = (*ptr) * (*ptr);  
    cube = (*ptr) * (*ptr) * (*ptr); 
    
    printf("the square of %d is: %d\n", num, square);
    printf("the cube of %d is: %d\n", num, cube);

    return 0;
}
