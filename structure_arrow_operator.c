#include <stdio.h>
#include <string.h>

//Write a program to illustrate the use of arrow operator

typedef struct employee
{
    int age;
    float salary;
    char name[100];
} Emp;


int main(){
    Emp e1;
    Emp* ptr = &e1;
    e1.age = 34;
    strcpy(e1.name, "Tas Fin");
    e1.salary = 4523.21;

    printf("%d %.2f %s\n", ptr->age, ptr->salary, ptr->name);


    return 0;
}