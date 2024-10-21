#include<stdio.h>
int main()
{
    // AREA OF POLYGONS   // SAP ID:500101861
int shape,pbase,pheight,theight,tlb,tsb,rheight,rside,area_p,area_t,area_r;
float sradius,maj_radius,min_radius,area_s,area_e;
scanf("%d",&shape);
switch(shape)
{
case 1:
{
printf("SAI Enter the value of Parallelogram");
scanf("%d%d",&pbase,&pheight);
area_p= pbase*pheight;
printf("Area of Parallelogram is:%d",area_p);
}break;
case 2:
{
printf("SAI Enter the value of Trapezoid");
scanf("%d%d%d",&theight,&tlb,&tsb);
area_t=(tlb+tsb)/2*theight;
printf("Area of Trapezoid is:%d",area_t);
} break;
case 3:
{
printf("SAI Enter the value of Rhombus");
scanf("%d%d",&rheight,&rside);
area_r= rheight*rside;
printf("Area of Rhombus is:%d",area_r);
} break;
case 4:
{
printf("SAI Enter the value of Sphere");
scanf("%f",&sradius);
area_s= 4*3.14*sradius*sradius;
printf("Area of Sphere is:%f",area_s);
} break;
case 5:
{
printf("SAI Enter the value of Ellipse");
scanf("%f%f",&maj_radius,&min_radius);
area_e=3.14*maj_radius*min_radius;
printf("Area of Ellipse is:%f",area_e);
} break;
default:
{
printf("SAI the case is invalid");
}}
return 0;
}