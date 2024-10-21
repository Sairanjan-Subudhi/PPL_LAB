#include<stdio.h>
int main()
{
    // MULTIPLICATION OF 2 DIMENSIONAL ARRAYS    // SAP ID: 500107726
  int a1[50][50],a2[50][50],mul[50][50],i,j;
    int r,c,k;
   printf(" Enter number of rows:\n");
   scanf("%d",&r);
   printf(" Enter number of columns:\n");
   scanf("%d",&c);
        
     printf(" Enter the elements of First matrix:\n");
     for(i=0;i<r;i++)                                        
     {
        for(j=0;j<c;j++)
        {
            printf("Enter Element a%d%d",i+1,j+1);
            scanf("%d",&a1[i][j]);
        }
     }
    printf(" Enter the elements of Second matrix:\n"); 
     for(i=0;i<r;i++)                                        
     {
        for(j=0;j<c;j++)
        {
            printf("Enter Element b%d%d",i+1,j+1);
            scanf("%d",&a2[i][j]);
        }
     }
  for(i=0;i<r;i++)                                           
     for(j=0;j<c;j++)
      {
        mul[i][j]=0;
        for(k=0;k<c;k++)
       { 
          mul[i][j]+=a1[i][k]*a2[k][j];
        }
       }  
   
     printf("Multiplication Of Matrices:\n");
     for(i=0;i<r;i++)                                         
    { for(j=0;j<c;j++)
      {
       printf("%d  ",mul[i][j]);
      }
      printf("\n");
   }
return 0;   
}  