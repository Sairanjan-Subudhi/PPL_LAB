#include<stdio.h>
struct item
{
    char itemname[50];
    int qty;
    float price;
    float amount;
};

void readitem(struct item *i)
{
    printf("SAI Enter product name:");
    scanf("%s",&i->itemname);
    printf("SAI Enter price:");
    scanf("%f",&i->price);
    printf("SAI Enter quantity:");
    scanf("%d",&i->qty);
    i->amount= (float)i->qty*i->price;
}

void printitem(struct item *i)
{
    printf("\nNAME: %s", i->itemname);
    printf("\nPrice: %f", i->price);
    printf("\nQuantity: %d", i->qty);
    printf("\nTotal Amount: %f", i->amount);
}

int main()
{
    struct item a;
    struct item *ptr;
    ptr= &a;
    readitem(ptr);
    printitem(ptr);
    return 0;
}