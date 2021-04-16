#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,b,c;
    float d,e;
    printf("the quadratic equation is=ax^2+bx+c\n");
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d= pow(b,2)-(4*a*c);
    e=sqrt(d);
   if(d>0)
    printf("the roots are%fand%f\n",(-b+e)/2*a,(-b-e)/2*a);
    else if(d<0)
        printf("roots doesnot exist\n");
    else
        printf("the roots are same %f",-b/2*a);

}
