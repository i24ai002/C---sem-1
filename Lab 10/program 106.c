#include<stdio.h>
struct item
{
    char item_name[100];
    int quantity;
    int price;
    int amount;
};

void list(int n)
{
    struct item Sn;
    printf("enter the name of item: ");
    scanf("%s",&Sn.item_name);
    printf("enter quantity: ");
    scanf("%d",&Sn.quantity);
    printf("enter the price: ");
    scanf("%d",&Sn.price);
    Sn.amount=Sn.price*Sn.quantity;
    printf("amount: %d\n",Sn.amount);
}

int main()
{
    printf("enter the number of items: ");
    int b;
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        list(i);
    }
}