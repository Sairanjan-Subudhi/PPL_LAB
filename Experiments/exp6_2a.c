#include<stdio.h>
int triangle_area(float b, float h)
{
    float a;
    a=0.5*b*h;
    printf("SAI Area of triangle is:%f \n",a);
}
int main()
{
    // SAIRANJAN SUBUDHI 500101861
    float b,h;
    printf("SAI enter base:");
    scanf("%f",&b);
    printf("SAI enter height:");
    scanf("%f",&h);
    triangle_area(b,h);
    return 0;
}