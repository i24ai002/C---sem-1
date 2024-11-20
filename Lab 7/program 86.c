#include<stdio.h>
#include<string.h>
char len();
void main()
{
    len();
}


char len()
{
    int length;
    char a[100];
    printf("enter text\n");
    gets(a);
    length= strlen(a);
    printf("\nlength of string=%d",length);
}