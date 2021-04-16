#include <stdio.h>
#include <stdlib.h>

void main()
{int a,b,c,d,e;
printf("enter five numbers");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a>b && a>c &&a>d && a>e)
  printf("%d",a);
else if(b>c &&b>d && b>e)
   printf("%d",b);
   else if(c>d && c>e)
  printf("%d",c);
  else if(d>e)
  printf("%d",d);
else
   printf("%d",e);

}
