//RUN PROGRAM 99(GIVE YOUR INPUT IN 99,RUN AND THEN RUN THIS PROGRAM)


#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("vowels.txt","r");
    int countt=0,i=0,count=0;
    char c;
    c=fgetc(ptr);
    
    while(c!=EOF)
    {
        printf("%c",c);
        if(c==' ')
        {
            countt++;
        }
        else if(c=='\n')
        {
            count++;
        }
        i++;
        c=fgetc(ptr);
    }
    printf("number of words in file is:%d\n",countt+1);
    printf("number of characters in file is:%d\n",i);
    printf("number of lines in file is:%d\n",count);
    fclose(ptr);
}

