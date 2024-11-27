#include <stdio.h>
#include<string.h>
int main() 
{
    char str[100];
    char *ptr;
    printf("enter a string: ");
    gets(str);
    
    ptr = str;
    
    int length= strlen(ptr);
    printf("the length of string is:%d", length);

    return 0;
}
