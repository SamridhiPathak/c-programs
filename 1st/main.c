#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("enter a number till which you want to see the table from 1 to that number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d*%d = %d\n",i,j,i*j);

    }

    return 0;
}
