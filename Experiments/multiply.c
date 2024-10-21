#include<stdio.h>
int main()
{
    //MULTIPLICATION WITHOUT * OPERATOR
    int a,b,i,mul=0;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        mul=mul+a;
    }
    printf("Multiplication done by SAI is:%d\n",mul); // SAP ID: 500101861
    return 0;
}