#include<stdio.h>
int main()
{
    //YEAR-MONTH-DAYS FORMAT
    int nod,years,months,days;
    printf("Enter number of days");
    scanf("%d",&nod);
    years = nod/365;
    days = nod - (years*365);
    months = days/30;
    days = days-(months*30); //SAP ID: 500101861
    printf("number of days that can be written by SAI as: %d year(s):%d month(s):%d day(s)",years ,months ,days );
    return 0;
}