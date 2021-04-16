#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,b,c;
    printf("enter three integers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b>c)
        printf("%d%d%d\n",c,b,a);
    else if(b>a>c)
        printf("%d%d%d\n",c,a,b);
    else if(a>c>b)
        printf("%d%d%d\n",b,c,a);
    else if(c>a>b)
        printf("%d%d%d\n",b,a,c);
    else if(c>b>a)
        printf("%d%d%d\n",a,b,c);

    else if(b>c>a)
        printf("%d%d%d\n",a,c,b);
    else
        printf("the numbers are equal");
}
