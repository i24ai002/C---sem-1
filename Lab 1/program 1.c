#include <stdio.h>

int main()
{
    int P,R,T,SI;
    printf("Enter P,R,T");
    scanf("%d%d%d",&P,&R,&T);
    SI=(P*R*T)/100;
    printf("The simple interest is :%d",SI);
    return 0;
}