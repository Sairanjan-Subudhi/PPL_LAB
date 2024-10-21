#include<stdio.h>
void main()
{
  // SAIRANJAN SUBUDHI 500101861
    int i,n,r,sum=0,temp;
    printf("Sai Enter a number:");
    scanf("%d",&n);
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