#include<stdio.h>
int main()
{
    char ch;
    printf("SAI please enter a value:");
    scanf(" %c",&ch);
    if ((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    {
        printf("The value entered by SAI is an Alphabet");
    
    }
    else if (ch>=48 && ch<=57)
    {
        printf("The value entered by SAI is a digit");
    
    }
    else 
    {
        printf("The value entered by SAI is a special character");
    }
 return 0;   
}