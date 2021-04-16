#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,sum=0;
   int a[2][4];
   for(i=0;i<2;i++)
   {
    for(j=0;j<4;j++)
    {
        printf("enter a number");
        scanf("%d",&a[i][j]);
    }

   }
    for(i=0;i<2;i++)
   {
    for(j=0;j<4;j++)
    {if(j%2!=0)
       { printf("%d",a[i][j]);
    }
    }


}
}
