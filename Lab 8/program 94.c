#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rts[100],*a,*b;
    a = &str[0];
    int m;
    printf("enter the string\n");
    fgets(str,100,stdin);
    m = strlen(str);
    b = &rts[m];
    for(int i=0;*a!='\0';i++)
    {
        *b = *a;
        a++;
        b--;
    }
    printf("reverse of the entered string is\n");
    for(int i=0;i<=m;i++)
    {
        printf("%c",*b);
        b++;
    }
}