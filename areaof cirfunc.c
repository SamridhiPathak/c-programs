#include<stdio.h>
#include<conio.h>
void areaofcir(float );
void main()
{
float r;
printf("enter the desired radius whose area u want");
scanf("%f",&r);
areaofcir(r);
}
void areaofcir(float a)
{
float area;
area=3.14*a*a;
printf("area=%f",area);
}







