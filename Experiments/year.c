#include<stdio.h>
int main()
{
    //TO FIND WHETHER IT IS A LEAP YEAR OR NOT
    int year;
    scanf("%d",&year);
  if (year%4==0 || year%400==0 || year%100==0)
  {
    printf("entered year by Sai is leap year");
  }
  else 
  {
    printf("entered year by Sai is not a leap year");  //SAP ID: 500101861
  } 
 return 0;  
}