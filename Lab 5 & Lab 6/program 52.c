#include <stdio.h>

int main() 
{
    int n = 4; // Number of rows

    for (int i=1; i<=n; i++) 
    {
        //Print leading spaces
        for (int j=n-i;j>=1;j--) 
        {
            printf(" ");
        }
        // Print increasing numbers
        for (int k=1; k<=i; k++) 
        {
            printf("%d",k);
        }
        // Print decreasing numbers
        for (int k=i-1;k>=1;k--) 
        {
            printf("%d",k);
        }
        printf("\n");
    }

    return 0;
}
