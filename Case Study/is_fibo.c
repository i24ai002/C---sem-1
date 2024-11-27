#include<stdio.h>
int main()
{
    int t;
    printf("enter the number of terms you want to check for\n");
    scanf("%d",&t);
    int n[t];
    printf("enter the numbers\n");
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    
    for(int i=0;i<t;i++)
    {
        int flag=0;
        int x;
        x=n[i];
        int a=0,b=1,c;
        while(a<=x)
        {
            c=a+b;
            a=b;
            b=c;
            if(x==a)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("\nis a fibo element");
        }
        else
        {
            printf("\nis not a fibo element");
        }
    }
    
    return 0;
}

