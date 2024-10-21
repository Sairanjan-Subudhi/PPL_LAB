#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int b;

    printf("SAI enter a string in uppercase:");
    gets(a);

    for(b=0;a[b];b++)
    {
        if (a[b]>=65 && a[b]<=90)
        a[b]+=32;
    }

    printf("SAI string in lower case is: %s\n", a);
    return 0;
}