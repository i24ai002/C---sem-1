#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter number of rocks found: \n");
    scanf("%d",&n);
    char a[n][100];
    int c[n][26],flag=0;
    printf("enter elements found in respective rocks: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        for(int j=0;a[i][j]!='\0';j++)
        {
            c[i][a[i][j]-97]=1;
        }
        
    }

    for(int i=0;i<26;i++)
    {
        for(int k=0;k<n;k++)
        {
            if(c[k][i]==1)
            {
            flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
            if(flag==1)
            {
                count++;
            }
    }
        
    
    printf("number of common elements found are: %d",count);
}

