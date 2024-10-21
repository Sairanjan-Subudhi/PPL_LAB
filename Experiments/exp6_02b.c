#include<stdio.h>
void swap(int a,int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("SAI value of a after swapping is:%d\n",a);
    printf("SAI value of b after swapping is:%d\n",b);
}
int main()
{
    int a,b;
    printf("SAI enter value of a:");
    scanf("%d", &a);
    printf("SAI enter value of b:");
    scanf("%d", &b);
   swap(a,b);
   return 0;
}