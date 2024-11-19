#include <stdio.h>

int main()
{
   float M,P,C,E,CM;
   printf("enter marks of mathematics out of 200");
   scanf("%f",&M);
   printf("enter marks of physics out of 200");
   scanf("%f",&P);
   printf("enter marks of chemistry out of 200");
   scanf("%f",&C);
   printf("enter marks of entrance exam out of 100");
   scanf("%f",&E);
   CM = (M/2)+(P/2)+(C/2)+E;
   printf("The cut-off marks is: %f",CM);
    return 0;
}