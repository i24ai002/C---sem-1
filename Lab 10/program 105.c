#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(char* str, int l, int r) 
{
    if (l == r) 
    {
        printf("%s\n", str);
    } 
    else 
    {
        for (int i = l; i <= r; i++) 
        {
            swap((str + l), (str + i));
            permutation(str, l + 1, r);
            swap((str + l), (str + i)); 
        }
    }
}

int main() 
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    int n= strlen(str);
    permutation(str, 0, n - 1);
    
    return 0;
}