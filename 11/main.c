#include <stdio.h>
#include <stdlib.h>

void main()
{int n;
 float a,b;
  printf("for area of circle enter the value of radius\nfor area of triangle,enter the value of base and height\n for rectanlge,enter the value of length and breadth\for square,enter the value of side length\n");
  scanf("%f%f",&a,&b);
  printf("For area of circle-press 1\nFor area of triangle press-2\nFor area of square-press 3\nFor area of rectangle-press 4\n");
  scanf("%d",&n);
  if(n==1)
    printf("the required area of circle is%f\n",(3.14*pow(a,2)));
  if(n==2)
    printf("the required area of triangle is%f\n",(0.5*a*b));
  if(n==3)
    printf("the required area of square is%f\n",(pow(a,2)));
  if(n==4)
    printf("the required area of recctangle is%f\n",(pow(a,b)));
}
