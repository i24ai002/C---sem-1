#include <stdio.h>

int main()
{
    float base,height,area;
    printf("Enter base and height");
    scanf("%f%f",&base,&height);
    area = (base*height)/2;
    printf("The area of triangle is:%f",area);
    return 0;
}