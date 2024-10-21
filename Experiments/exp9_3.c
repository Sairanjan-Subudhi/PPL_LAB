#include <stdio.h>
int main()
{
    // SAIRANJAN SUBUDHI 500101861
union product
{
 char prodName[50];
 float price;
 int quantity;
}prod;
printf("SAI Enter Product Name: ");
scanf ("%s", &prod.prodName) ;
printf ("SAI Enter Price per unit: ");
scanf ("%f", &prod.price);
float price = prod.price;
printf("SAI Enter Quantity:");
scanf("%d",&prod.quantity) ;
printf ("SAI Amount is : %.4f", (prod.quantity*price)) ;
return 0;
}