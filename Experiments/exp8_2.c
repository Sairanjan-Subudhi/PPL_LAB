#include<stdio.h>
int main()
{
    // SAIRANJAN SUBUDHI 500101861
   int a[200], i, n, even=0, odd=0;
   printf("SAI Enter the size of the array:");
   scanf("%d",&n);
   printf("\nSAI Enter the elements of the array:");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    even++;
   }
   printf("\nSAI Even numbers in arrays are: %d",even);
    return 0;
}