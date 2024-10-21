#include<stdio.h>
#include <math.h>
int main()
{
int num,i,j,temp1, temp2, sum=0;
printf("500107776\n");
printf("enter a number to know all armstrong number\n");
scanf("%d", &num);
printf("Armstrong numberes are:\n");
for(int i=1;i<=num;i++)
{
sum=0;
temp1=i;
temp2=i;
while(temp1>0)
   {
j=temp1%10;
sum+=pow(j,3);
temp1=temp1/10;
   }
if(sum==temp1)
  {
    printf("%d\n",sum);
  }
}
}
