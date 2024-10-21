#include<stdio.h>
#include<stdlib.h>
// SAIRANJAN SUBUDHI 500101861
int i,n;
struct subject
{
    char name[50];
    int code;
} *ptr;
int main()
{
    printf("SAI Enter no. of subjects:");
    scanf("%d",&n);
    ptr=(struct subject*)malloc(n*sizeof(struct subject));
    for(i=0;i<n;i++)
    {
     printf("SAI Enter name and code for %d",i+1);
     scanf("%s",&(ptr+i)->name);
     scanf("%d",&(ptr+i)->code);
     printf("\nName is %s\n",(ptr+i)->name);
     printf("\ncode is %d\n",(ptr+i)->code);
     }
     return 0;
    }
