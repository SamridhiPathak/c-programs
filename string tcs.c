#include<stdio.h>
void main()
{int i,c=0;;
char s[30];
printf("enter a string\n");
scanf("%s",s);
if(s[0]!=s[1]){
for(i=1;i<20;i++)
{
if(s[i]!=s[i-1])
{
c++;}
printf("\n%d",c);

}
}
}
