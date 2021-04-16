#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i=1,k=1,j,f=1;
    printf("enter a number");
    scanf("%d",&n);
    if(n%2==0)
    {
        while(i<=10)
        {
            j=n*i;
            printf("%d\n",j);
            i++;
        }
    }
    else
    {
        while(k<=n)
        {


            f=f*k;
            k++;
        }
        printf("%d",f);
    }

}
