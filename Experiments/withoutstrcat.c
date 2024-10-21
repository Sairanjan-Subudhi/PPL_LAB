#include<stdio.h>
#include<string.h>
int main()
{
    // ADDING TWO MATRICES WITHOUT STRCAT   // SAP ID: 500101861
    int i,j;
    char str3[100];
    char str1[100]= "Hello";
    printf("%s",str1);
    char str2[100]= "Vipul\n";
    printf("%s", str2);
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[i]!='\0';j++)
    {
        str1[i]=str3[j];
        str3[i]=str2[j];
    }}
    str1[i]='\0';
return 0;
}