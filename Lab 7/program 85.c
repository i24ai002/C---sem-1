#include<stdio.h>
char check(char x);
void main()
{
    char x;
    printf("enter character: ");
    scanf("%c",&x);
    check(x);
}



char check(char x)
{
    switch(x)
    {
        case 'a' : printf("character is vowel");
                break;
        case 'e' : printf("character is vowel");
                break;
        case 'i' : printf("character is vowel");
                break;
        case 'o' : printf("character is vowel");
                break;
        case 'u' : printf("character is vowel");
                break;
        case 'A' : printf("character is vowel");
                break;
        case 'E' : printf("character is vowel");
                break;
        case 'I' : printf("character is vowel");
                break;
        case 'O' : printf("character is vowel");
                break;
        case 'U' : printf("character is vowel");
                break;
        default : printf("charcter is not a vowel");
    }
}