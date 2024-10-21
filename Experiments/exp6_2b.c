#include <stdio.h>

void swap(int a, int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("SAI value of a after swapping:%d\n",a);
    printf("SAI value of b after swapping:%d\n",b);
}
int main()
{
    int a,b;
    printf("SAI Enter value of a and b:");
    scanf("%d %d", &a, &b);
    swap(a,b); 
    }
