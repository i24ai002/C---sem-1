#include <stdio.h>

int main() 
{
    int num = 18;
    int *ptr;
    ptr = &num;
    
    printf("Before modification: num = %d\n", num);
    *ptr = 7;
    printf("After modification: num = %d\n", num);

    return 0;
}