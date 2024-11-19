#include<stdio.h>
int main()
{
    char character;
    int ASCIIvalue;

    printf("Enter your character here: ");
    scanf("%c", &character);
    
    ASCIIvalue = character;
    (ASCIIvalue >= 97 && ASCIIvalue <= 122 ) ? printf("Yes, It's a small case letter") : printf("No, It's not a small case letter");

    return 0;
}