#include<stdio.h>
struct student{
char name[50];
int sapid;
int marks;
}stu;
int main()
{
    printf("SAI Enter Name:\n");
    scanf("%s",&stu.name);
    printf("SAI Enter SapID:\n");
    scanf("%d",&stu.sapid);
    printf("SAI Enter Marks:\n");
    scanf("%d",&stu.marks);
    printf("Result of the Structure:\n");
    printf("Name:%s\n",stu.name);
    printf("SapID:%d\n",stu.sapid);
    printf("Marks:%d\n",stu.marks);
   return 0; 
}