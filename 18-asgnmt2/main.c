#include <stdio.h>
#include <stdlib.h>

void main()
{
float n,a,b,c;
printf("enter the number of units consumed");
scanf("%f",&n);
if(1<=n<=100)
{
    a=(n*0.4)+50;
    printf("the total amount which have to be paid is%f",a);
}
else if(100<=n<=300)
{
    b=(n*0.5)+50;
    printf("the total amount which have to be paid is%f",b);
}
    else
    {
        c=n*0.6+50;
        printf("%f",c);
    }
}
