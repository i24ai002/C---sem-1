#include<stdio.h>
int main()
{
    int count=0;
    FILE *fptr;
    fptr=fopen("vowels.txt","w");
    char txt[100],c;
    printf("enter text: ");
    fgets(txt,100,stdin);
    fprintf(fptr,"%s",txt);
    fclose(fptr);
    fptr=fopen("vowels.txt","r");
    c=fgetc(fptr);
    while(c!= EOF)
    {
        
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'I':
            case 'O':
            case 'U':count++;
        }
        c=fgetc(fptr);
    }
    printf("number of vowels in the text is: %d",count);
    fclose(fptr);
}