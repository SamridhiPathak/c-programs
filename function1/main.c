#include <stdio.h>
#include <stdlib.h>
void add(int x,int y)
{
    int z;
    z=x+y;
    printf("%d",z);
}
void sub(int q,int w)
{
    int e;
    e=q-w;
    printf("%d",e);
}
void mul(int r,int t)
{
    int y;
    y=r*t;
    printf("%d",y);
}
void divi(int k,int l)
{
    int j;
    j=k/l;
    printf("%d",j);
}

void main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    add(a,b);
    printf("\n");
    sub(a,b);
    printf("\n");
    mul(a,b);
    printf("\n");
    divi(a,b);
}
