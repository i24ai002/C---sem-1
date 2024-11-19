#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter num1");
    scanf("%d",&a);
    printf("Enter num2");
    scanf("%d",&b);
    printf("Enter num3");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
        printf("%d is the largest among three",a);
        }
        else
        {
            printf("%d is the largest among three",c);
        }
        
    }
    else{
        if(b>c)
        {
            printf("%d is the largest among three",b);
        }
        else{
            printf("%d is the largest among three",c);
        }
    }
    return 0;	
}