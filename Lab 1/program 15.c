#include <stdio.h>

int main()
{
   float a,b,c,d,e,total,division;
   printf("enter your maths marks");
   scanf("%f",&a);
   printf("enter your physics marks");
   scanf("%f",&b);
   printf("enter your chemistry marks");
   scanf("%f",&c);
   printf("enter your bio marks");
   scanf("%f",&d);
   printf("enter your english marks");
   scanf("%f",&e);
   total = a+b+c+d+e;
   division = (total)/5;
   printf("division is: %f",division);
    return 0;
}