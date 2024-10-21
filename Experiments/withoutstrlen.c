#include<stdio.h>
int main()
{   // sap id: 500107726
    char str[100];
    int i, len=0;
    printf("Enter the string:\n ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
  printf("Length of string is:%d", len);
  return 0;  
}