#include<stdio.h>
int main()
{
    //TEMPERATURE CHANGE FROM CELSIUS TO FAHRENHEIT //SAP ID: 500101861
    float cel,far,kel;
    printf("enter temperature in celsius(fahrenheit):");
    scanf("%f",&cel);
    printf("enter temperature in celsius(kelvin):");
    scanf("%f",&kel);
    far=(cel*9/5)+32;
    kel= cel+273.5;
    printf("the entered temperature by SAI in fahrenheit is:%f\n",far);
    printf("the entered temperature by SAI in Kelvin is:%f\n",kel);
   return 0; 
}