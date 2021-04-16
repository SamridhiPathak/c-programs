#include <stdio.h>
#include <stdlib.h>

void main()
{float a,b,c;
    printf("enter three sides for a triangle");
    scanf("%f%f%f",&a,&b,&c);
    if(a==b&&a==c||b==a&&b==c||c==a&&c==b)
        printf("the triangle is equilateral ");
    else if(a==b || b==c ||a==c)
        printf("the triangle is isoceles");
    else if(a!=b &&a!=c ||b!=a &&b!=c || c!=a &&c!=b)
        printf("the triangle is scalene");
}
