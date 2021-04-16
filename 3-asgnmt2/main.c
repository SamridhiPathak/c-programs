#include <stdio.h>
#include <stdlib.h>

void main()
{int n,i,fact=1;
printf("enter the number whose factorial is required");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=fact*i;}
    printf("%d",fact);

}
