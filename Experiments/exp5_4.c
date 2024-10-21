#include <stdio.h>
 
int main()
{
    float i,n,a=0;
    printf("SAI Enter a Number:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
      a=a+ 1/i;
    }
    printf("SAI Sum is: %f", a);
    return 0;
}