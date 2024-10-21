#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char str1[50];
    char str2[50];
    printf("SAI Enter 1st string:\n");
    scanf("%s",str1);
    printf("SAI Enter 2nd string:\n");
    scanf("%s",str2);
    for(i=0;i<=strlen(str1);i++)
    {
        if(str1[i]!=str2[i])
        {c++;}
    }
    if(c>0)
    {
        printf("Unequal Strings");
    }
    else
    {
        printf("Equal Strings");
    }
    return 0;
}