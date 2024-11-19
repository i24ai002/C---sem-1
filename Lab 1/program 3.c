#include <stdio.h>

int main()
{
   int a,b,tax1,tax2;
   printf("Enter your salary in hand");
   scanf("%d",&a);
   tax1= a*0.12;
   tax2= a*0.08;
   b = a +tax1 + tax2;
   printf("Your gross salary is; %d",b);
    return 0;
}