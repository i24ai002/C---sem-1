#include<stdio.h>
int main(){
    int n;
    int lucknum=7;
    printf("find lucky number form(0-9) ");
    for(n;;){
        printf("\n enter number: ");
        scanf("%d",&n);
        if(n==lucknum){
            printf("\n %d is a lucky number",n);
            break;
        }
        else{
            printf("\n %d is not a lucky number",n);
        }
    }
    printf("\n end");
    return 0;
}