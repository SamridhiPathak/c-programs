#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i=1;
    while(i<=50)
    {
        if(i%5==0 || i%10==0)
        {
            printf("%d\n",i);
        }

    i++;
    }
}
