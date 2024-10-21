#include<stdio.h>
int main()
{
    // SAIRANJAN SUBUDHI 500101861
    int a1[2][2]= {{1,2},{3,4}};
    int rsum=0, csum=0, i, j;
    for(i=0;i<2;i++)
    {
     for(j=0;j<2;j++)
      {
        csum = csum + a1[j][i];
        rsum = rsum + a1[i][j];
       }
    printf("SAI Column %d = %d || Row %d = %d\n", i+1, csum, i+1, rsum);
    csum=0;
    rsum=0;
    }
    return 0;
}