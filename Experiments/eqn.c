#include<stdio.h>
#include<math.h>
int main()
{
    // FINDING ROOTS OF QUADRATIC EQUATION       // SAP ID: 500101861
    int a,b,c;
    float d,d1,x1,x2;                                                                   
    printf("SAI Enter the constants of Quadratic Equation:"); // constants such as p,q,r for eqn. px^2+qx+r=0
    scanf("%d%d%d",&a,&b,&c);
    d=sqrt((b*b)-(4*a*c));
    d1=((b*b)-(4*a*c));
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
   if (d1==0)                              // b^2-4ac=0, then roots are equal
   {
    printf("The Roots of Equation are Equal\n");
    printf("First Root=%f\n",x1);
    printf("Second Root=%f\n",x2); 
   }  
   else if (d1>0)                          // b^2-4ac>0, then roots are unique
   {
    printf("The Roots of Equation are Real and Unique\n");
    printf("First Root=%f\n",x1);
    printf("Second Root=%f\n",x2);
   }
   else 
   {
    printf("The Roots are Imaginary");
   }
  return 0; 
}