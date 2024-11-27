#include<stdio.h>
int main()
{
    char str[100],*ptr;
    ptr = &str[0];
    int count=0;
    printf("enter the string\n");
    fgets(str,100,stdin);
    for(int i=0;*ptr!='\0';i++)
    {
        if(*ptr==' ')
        {
            count++;
        }
        ptr++;
    }
    printf("number of words in the string is:%d",count+1);
}