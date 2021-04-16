#include <stdio.h>
#include <stdlib.h>

void main()
{int n,r;
printf("enter a number");
scanf("%d",&n);
r=fact(n);
printf("required factorial is%d",r);

}
int fact(int p)
{int i,f=1;
for (i=1;i<=p;i++)
{
    f=f*i;

}
return(f);
}
