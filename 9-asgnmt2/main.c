#include <stdio.h>
#include <stdlib.h>

void main()
{int a,b,c;
 printf("enter three sides of a triangle");
 scanf("%d%d%d",&a,&b,&c);
 if(a+b>c && b+c>a && a+c>b)
    printf("triangle will be formed");
 else
    printf("sides can't form a triangle");
}
