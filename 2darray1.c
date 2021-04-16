#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,sum=0;
   int a[3][3];
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        printf("enter a number");
        scanf("%d",&a[i][j]);
    }

   }
    for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
        printf("\n");
    }
    for(j=0;j<3;j++)
    {
        sum=sum+a[0][j];
    }
     printf("%d",sum);
}
