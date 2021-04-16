#include <stdio.h>
#include <stdlib.h>
void areac(float x)
{float z;
    z=3.14*pow(x,2);
    printf("area of circle is %2f",z);
}
void areat(float q,float w)
{float e;
    e=0.5*q*w;
    printf("area of triangle is %2f",e);
}
void arear(float k,float l)
{
    float m;
    m=k*l;
    printf("area of rectangle is %2f",m);
}
void main()
{
float a,b;
printf("enter the dimensions\n");
scanf("%f%f",&a,&b);
areac(a);
areat(a,b);
arear(a,b);
}
