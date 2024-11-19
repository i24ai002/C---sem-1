#include <stdio.h>

int main()
{
   int Hour,Minutes,Seconds,total;
   printf("Enter time in the format Hour Minute Seconds");
   scanf("%d%d%d",&Hour,&Minutes,&Seconds);
   int a,b,c;
   a = Hour*3600;
   b = Minutes*60;
   c = Seconds;
   total = a+b+c;
   printf("The total time in seconds is: %d",total);
    return 0;
}