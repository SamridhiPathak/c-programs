#include <stdio.h>
#include <stdlib.h>

void main()
{
int a,b,n;
printf("enter two no.\n");
scanf("%d%d",&a,&b);
printf("the entered no. is A=%d and B=%d\n",a,b);
printf("For SUM-press 1\nFor SUBS-press 2\nFor MULTIPLICATION-press 3\nFor DIVISION-press 4\nFor checking REMAINDER-press 5\n");
scanf("%d",&n);
if(n==1)
    printf("The required sum is%d\n",(a+b));
if(n==2)
    printf("the required subs is%d",(a-b));
if(n==3)
    printf("the required multiplication is%d\n",(a*b));
if(n==4)
    printf("the required division is%d\n",(a/b));
if(n==5)
    printf("the required remainder is %d",(a%b));
}
