#include <stdio.h>

int main()
{
   int maths,chemistry,physics,english,pe,total;
   printf("Enter mathematics marks");
   scanf("%d",&maths);
   printf("Enter chemistry marks");
   scanf("%d",&chemistry);
   printf("Enter physics marks");
   scanf("%d",&physics);
   printf("Enter english marks");
   scanf("%d",&english);
   printf("Enter pe marks");
   scanf("%d",&pe);
   total = maths + chemistry + physics + english + pe;
   printf("\nthe total marks are:%d",total);
   float percentage;
   percentage = total/5;
   printf("\n percentage is:%f",percentage);
    return 0;
}