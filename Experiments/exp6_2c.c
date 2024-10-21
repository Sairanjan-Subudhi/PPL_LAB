#include<stdio.h>
void float_remainder( int a, int b)
{
    int c;
    c=a%b;
    printf("SAI remainder is:%d", c);
}
int main()
{
    int a,b;
    printf("SAI enter value of a:");
    scanf("%d", &a);
    printf("SAI enter value of b:");
    scanf("%d", &b);
    float_remainder(a,b);
    return 0;
}