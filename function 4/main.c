#include <stdio.h>
#include <stdlib.h>
int fact(int p)
{int q=1,i;
for(i=1;i<=p;i++)
{
    q=q*i;
return(q);
}


}

void main()
{
    int n,z;
    printf("enter a number\n");
    scanf("%d",&n);
    z=fact(n);
    printf("required factorial is %d",z);
}
