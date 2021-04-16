#include <stdio.h>
#include <stdlib.h>

void main()
{int n1,n2,n3,n4,n5,sum=0,a=0;
printf("enter the numbers of all five subjects\n");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
sum=n1+n2+n3+n4+n5;
a=sum/5;
printf("the required sum is%d\n",sum);
printf("required average is%d\n",a);
printf("average=a\n");
   if(90<=a<=100)
    printf("obtained grade is A+");
    else if(80<=a<=90)
        printf("obtained grade is A");
    else if(70<=a<=80)
        printf("obtained grade is B+");
    else if(60<=a<=70)
        printf("obtained grade is B");
    else if(50<=a<=60)
        printf("obtained grade is C+");
    else if(40<=a<=50)
        printf("obtained grade is C");
    else if(0<=a<=40)
        printf("obtained grade is F");


}
