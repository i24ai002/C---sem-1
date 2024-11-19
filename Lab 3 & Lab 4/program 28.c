#include<stdio.h>  
int main()    
{    
    int num,q,sum=0,temp;    
    printf("enter the number\n");    
    scanf("%d",&num);    
    temp=num;    

    while(num>0)    
    {    
    q=(num%10);    
    sum=sum+(q*q*q);    
    num=(num/10);    
    }    
    
    if(temp==sum)
    {
        printf("armstrong number");  
    }
    else    
    {
        printf("not an armstrong number");
    }
    
    return 0;  
}   