#include <stdio.h>
int main()
{
    int n;
    printf("enter the number you want to find factorial of\n");
    scanf("%d", &n);
int a=1;
    for (int i = 1; i <= n; i++)
  {
    a = i*a;
  }
    printf("%d", a);
  
    return 0;
}