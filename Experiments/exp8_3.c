#include<stdio.h>
int main()
{
    // SAIRANJAN SUBUDHI 500101861
    int c, first, last,  middle, search, n, a[100];
    printf("SAI Enter number of elements:");
    scanf("%d",&n);
    printf("SAI Enter %d integers:\n", n);
    for(c=0;c<n;c++)
        scanf("%d",&a[c]);
        printf("SAI ENter the value to find:\n");
        scanf("%d",&search);
        first = 0;
        last = n-1;
        middle = (first+last)/2;
 while(first<=last)
 {
    if(a[middle]<search)
    first=middle+1;
    else if (a[middle]==search)
    {
        printf("SAI %d is present at index %d\n", search, middle+1);
        break;
    }
    else
        last= middle-1;
        middle=(first+last)/2;       
 }
    if(first>last)
    printf("Not found! SAI %d is not present\n", search);
return 0;
}