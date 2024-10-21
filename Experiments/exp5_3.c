#include <stdio.h>
int main()
{
    // SAIRANJAN SUBUDHI 500101861
  int n,r,Sum=0;
  printf("Sai Enter a number:");
  scanf("%d", &n);
  while(n>0)
  {
     r=n%10;
     Sum=Sum+r;
     n=n/10;
  }
 printf("\n Sum of the digits of Given Number = %d", Sum);
  return 0;
}