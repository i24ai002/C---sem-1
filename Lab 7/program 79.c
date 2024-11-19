#include<stdio.h>
void exchange(int x, int y);
int main()
    {
        int x,y;
        printf("enter two numbers you want to exchange: ");
        scanf("%d %d",&x,&y);
        exchange(x,y);
        
    }
     void exchange(int x, int y)
    {
    int t;
    t=x;
    x=y;
    y=t;

    printf("%d,%d", x,y);
}
    
    
