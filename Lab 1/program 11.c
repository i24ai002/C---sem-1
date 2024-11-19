#include <stdio.h>

int main()
{
    int H,M,S,sec;
    printf("enter the total seconds");
    scanf("%d",&sec);
    H = (sec/3600);
    M = (sec-(H*3600))/60;
    S =  (sec-(H*3600))-(M*60);
    printf("H:M:S - %d:%d:%d",H,M,S);
    return 0;
}