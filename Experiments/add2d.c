#include<stdio.h>
int main()
{
    int a1[50][50],a2[50][50],sum[50][50],i,j;
    int r,c;
   printf("SAI Enter number of rows:\n");
   scanf("%d",&r);
   printf("SAI Enter number of columns:\n");
   scanf("%d",&c);
        
     printf("SAI Enter the elements of First matrix:\n");
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
            printf("Enter Element a%d%d",i+1,j+1);
            scanf("%d",&a1[i][j]);
        }
     }
    printf("SAI Enter the elements of Second matrix:\n");
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        {
            printf("Enter Element b%d%d",i+1,j+1);
            scanf("%d",&a2[i][j]);
        }
     }
  for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
      {
       sum[i][j]=a1[i][j]+a2[i][j];
      }  
   }
     printf("Sum Of Matrices:\n");
     for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
      {
       printf("%d  ",sum[i][j]);
       if(j==c-1){
        printf("\n\n");}
      }
   }
return 0;   
}