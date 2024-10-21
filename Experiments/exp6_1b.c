#include<stdio.h>
void coprime(int n)
{
    int r,n1;
    while(n>0)
    {
      r=n%10;
      n1=r;
      printf("%d",n1);
      n=n/10;  
    }
    int hcf,i;
    scanf("%d%d", &n,&n1);
    for(i=1;i<=n;i++)
    {
        if(n%i==0&&n1%i==0)
        hcf=i;
    }
        {if(hcf==1)
         printf("SAI the given numbers are co-prime\n");
    else
        printf("SAI the given numbers are not co-prime\n");}
    }


int main()
{
    //SAIRANJAN SUBUDHI 500101861
 int n;
 printf("SAI enter a number:");
 scanf("%d", &n);
 coprime(n);
 return 0;
}