#include<stdio.h>
int main()
{
    char a;
    int x,y;
    scanf("%d%d",&x,&y);
    int sum,dif,mul,quo;
    printf("Enter the Operator");
    scanf(" %c",&a);
  if (a=='+')
    {
        sum= x+y;
        printf("Sum is:%d\n",sum);
    }
  else if (a=='-')
    {
        dif= x-y;
        printf("Difference is:%d\n",dif);
    }  
  else if (a=='*')
    {
        mul= x*y;
        printf("Multiplication is:%d\n",mul);
    }  
  else if (a=='/')
    {
        quo= x/y;
        printf("Quotient is:%d\n",quo);
    }  
  else 
  {
    printf("Operator entered is invalid");
  }  
}