#include <stdio.h>
int main() 
{
    char str[100];
    char *ptr;
    int count=0;    
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    
    ptr = str;

    while (*ptr != '\0') 
    {  
        if (*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U') 
            {
                count++; 
            }
        ptr++;  
    }

    printf("Number of vowels in the string: %d\n", count);

    return 0;
}
