#include <stdio.h>
#include <stdlib.h>

void main()
{

    int n,m,i;
    printf("enter a number whose table is required");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("%d\n",m);
    }
}
