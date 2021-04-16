#include <stdio.h>
#include <stdlib.h>

void main()
{char ch;
    printf("enter a characer");
    scanf("%c",&ch);
   if(ch>=65 && ch<=90)
    printf("the entered character ins in uppercase");
    else if(ch>=97 && ch<=122)
        printf("the entered character is in lowercase");
    else
        printf("the entered ch is neither upper or lowercase");
}
