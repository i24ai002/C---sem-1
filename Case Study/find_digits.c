#include <stdio.h>

int main() 
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalnum = num;  

    while (num > 0) {
        int digit = num%10;
        num = num / 10; 
        
        if (digit != 0 && originalnum % digit == 0) 
        {
            count++;
        }
    }

    printf("Number of digits that divide %d: %d\n", originalnum, count);
    
    return 0;
}
