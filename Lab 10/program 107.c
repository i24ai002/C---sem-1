#include <stdio.h>
#include <math.h>
void Flip()
{
    long  num,N,l,q,sum=0,swap_num;
    printf("Enter the number: ");
    scanf("%ld",&num);
    printf("Enter the value of N(where N is last digits): ");
    scanf("%ld",&N);
    l=pow(10,N);
    long NUM=num;
    num%=l;
    long t=NUM-num;
    while(num!=0)
    {
        q=num%10;
        sum=(10*sum)+q;
        num/=10;
    }
    swap_num=t+sum;
    printf("The swaped number :%ld",swap_num);
}   

int main()
{
    Flip();
    return 0;     
}