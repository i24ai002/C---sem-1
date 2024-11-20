#include<stdio.h>
int main()
{   
    int arr[10],f,flag=0,i=0;
    printf("enter array of number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to search\n");
    scanf("%d",&f);
    for(i;i<10;i++)
    {
        if(f==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n %d found at index %d ",f,i);
    }
    else
    printf("element not found");
    return 0;
}
