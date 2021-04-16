#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id no,age;
    char name[20];
    float salary;

};
void main()
{
    struct employee e1,e2,e3,e4,e5;
    printf("details of e1");
    scanf("%d%d%s%f",&e1.id no,&e1.age,&e1.name,&e1.salary);
    printf("details of e2");
    scanf("%d%d%s%f",&e2.id no,&e2.age,&e2.name,&e2.salary);
    printf("details of e3");
    scanf("%d%d%s%f",&e3.id no,&e3.age,&e3.name,&e3.salary);
    printf("details of e4");
    scanf("%d%d%s%f",&e4.id no,&e4.age,&e4.name,&e4.salary);
    printf("details of e5");
    scanf("%d%d%s%f",&e5.id no,&e5.age,&e5.name,&e5.salary);
