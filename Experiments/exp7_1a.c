#include<stdio.h>
int sum(int a[], int n)
{
    if(n<=0)
    return 0;
    return(sum(a,n-1)+a[n-1]);
}
int main()
{
    int a[]={10,20,30,40};
    int n= sizeof(a)/ sizeof(a[0]);
    printf("SAI Sum is: %d\n", sum(a,n));
    return 0;
}