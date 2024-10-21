#include<stdio.h>
void armstrong(int n)
{
    int i,r,sum=0,temp;
  for(i=1;i<=n;i++)
    for(temp=n;n!=0;n=n/10)
    {
         r=n%10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
         printf("Sai %d is an Armstrong number\n",temp);
    else
         printf("Sai %d is not an Armstrong number\n",temp);
}
int main()
{
    int num;
    printf("SAI enter a number except one digit number:");
    scanf("%d", &num);
    armstrong(num);
    return 0;
}
