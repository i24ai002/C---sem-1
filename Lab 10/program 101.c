#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("lmnitstudents.txt","a");
    char name[100];
    int roll,marks;
    printf("enter details of student\n");
        printf("enter name: ");
        scanf("%s",&name);
        fprintf(fptr,"student name:%s\n",name);
        printf("enter roll number: ");
        scanf("%d",&roll);
        fprintf(fptr,"student roll number:%d\n",roll);
        printf("enter marks: ");
        scanf("%d",&marks);
        fprintf(fptr,"student marks:%d\n\n",marks);
    fclose(fptr);
}