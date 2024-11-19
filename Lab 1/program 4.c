#include <stdio.h>

int main()
{
    float C,F;
    printf("Enter temperature in fahrenheits");
    scanf("%f",&F);
    C = (F-32)*5/9;
    printf("The temperature in celcius is: %f",C);
    return 0;
}