#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr[3],*brr[3],c[3][3],a,b;
    for(int i=0;i<3;i++)
    {
        arr[i]=(int*)calloc(3,sizeof(int));
        brr[i]=(int*)calloc(3,sizeof(int));
    }
    printf("enter elements of 3d matrix1:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(arr+i)+j));
        }
    }
    printf("enter elements of 3d matrix2:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(brr+i)+j));
        }
    }
    printf("matrix1\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n");
    }
    printf("matrix2\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",*(*(brr+i)+j));
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<3;k++)
            {
                a=*(*(arr+i)+k);
                b=*(*(brr+k)+j);
                c[i][j]=c[i][j]+a*b; 
            }
        }
        printf("\n");
    }
    printf("product of the matrices\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}