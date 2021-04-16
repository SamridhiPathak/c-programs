#include <stdio.h>
#include <stdlib.h>

void main()
{int a;
    printf("enter a year");
    scanf("%d",a);
    if(a%4==0 && a%100==0 && a%400==0)
     printf("the entered year is leap year");
    else
        printf("entered year is not a leap year");
}
