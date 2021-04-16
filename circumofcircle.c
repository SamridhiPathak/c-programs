#include<stdio.h>
#include<conio.h>
void circumference(float);
void main()
{
float r;
printf("enter the desired radius");
scanf("%f",&r);
circumference(r);
}
void circumference(float a)
{
float c;
c=2*3.14*a;
printf("required circumference=%f",c);
}
