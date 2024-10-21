#include<stdio.h>
int main()
{
    int a1[100]={0};
    int i,pos,x,n=10;
for(i=0;i<10;i++)
a1[i]=i+1;

for(i=0;i<n;i++)
printf("%d\n", a1[i]);

x=20;
pos=4;
n++;
printf("SAI the change in series is following\n");
for(i=n-1;i>=pos;i--)
 a1[i]=a1[i-1];
 a1[pos-1]=x;

 for(i=0;i<n;i++)
 printf("%d\n",a1[i]);
return 0;
}