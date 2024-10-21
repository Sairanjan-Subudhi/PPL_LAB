#include<stdio.h>
int main()
{
    //GREATEST OF THE THREE NUMBER // SAP ID: 500101861
    int a,b,c;
    printf("SAI Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
 if (a>=b && a>=c)
   {
    printf("1st number is greatest which is:%d\n",a);
   } 
else if(b>=a && b>=c)
   {
    printf("2nd number is greatest which is:%d\n",b);
   }
else 
  {
    printf("3rd number is greatest which is:%d\n",c);
  }   
return 0;
}
