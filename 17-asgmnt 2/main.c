#include <stdio.h>
#include <stdlib.h>

void main()
{char ch;
printf("enter a character");
scanf("%c",&ch);
if(ch='a' || 'e' || 'i' || 'o' || 'u')
    printf("the entered character is vowel");
else
    printf("consonant");

}
