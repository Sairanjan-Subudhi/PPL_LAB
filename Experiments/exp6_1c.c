#include<stdio.h>
int factorial (int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("SAI Factorial of %d is: %d",n,f);
}
int main()
{
    int num1;
    printf("SAI enter number:");
    scanf("%d", &num1);
    factorial(num1);
}