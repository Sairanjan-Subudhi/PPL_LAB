#include <stdio.h>
int main()
{
int n;
 printf("Enter the number of students:");
scanf("%d" ,&n);
struct student_record 
{
char name [20];
int SAP_ID;
int enrollNum;
struct dor
{
 int d;
 int m;
 int y;
} dors[n];
struct dob 
{
    int d;
    int m;
    int y;
} dobs[n];
struct date
{ 
    int d;
    int m;
    int y;
} doj[n];
} sr[n];

for (int i=0;i<n;i++)
{
     printf("Student Name: ");
     scanf("%s",&sr[i].name);
     printf("SAP ID: ");
     scanf("%d",&sr[i].SAP_ID);
     printf("Enrollment Number:");
     scanf ("%d",&sr[i].enrollNum);
     printf("Date of registration (dd/mm/yyyy): ");
     scanf("%d/%d/%d",&sr[i].dors[i].d,&sr[i].dors[i].m,&sr[i].dors[i].y);
     printf("Date of birth (dd/mm/yyyy): ");
     scanf("%d/%d/%d",&sr[i].dobs[i].d,&sr[i].dobs[i].m,&sr[i].dobs[i].y);
     printf("Date of joining (dd/mm/yyyy): ");
     scanf("%d/%d/%d'", &sr[i].doj[i].d,&sr[i].doj[i].m, &sr[i].doj[i].y);
     printf("\n");
}
     printf("\n\n OUTPUT: In\n");


for(int i=0;i<n;i++)
{
printf("Student Name: %s\n",sr[i].name);
printf("SAP ID: %d\n" , sr[i].SAP_ID) ;
printf("Enrollment Number: %d", sr[i].enrollNum) ;
printf("Date of registration dd/mm/yyyy) :%d/%d/%d\n",sr[i].dors[i].d,sr[i].dors[i].m,sr[i].dors[i].y);
printf("Date of birth (dd/mm/yyyy): %d/%d%d\n", sr[i].dobs[i].d,sr[i].dobs[i].m,sr[i].dobs[i].y);
printf("Date of joining (dd/mm/yyyy) : %d/%d/%d\n\n", sr[i].doj[i].d,sr[i].doj[i].m,sr[i].doj[i].y) ;
}
return 0;
}