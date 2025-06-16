#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int age;
    float salary;
    char name[100];
} emp;


int main(){
    emp e1;
    emp* ptr1 = &e1;
    e1.age = 34;
    strcpy(e1.name, "Tas Fin");
    e1.salary = 4523.21;

    printf("%d %.2f %s\n", e1.age, e1.salary, e1.name);

    printf("\n");

    printf(" \n pointer below one  \n");

    printf("\n");

    printf("%d %.2f %s", ptr1-> age, ptr1-> salary, ptr1-> name);
    return 0;
}