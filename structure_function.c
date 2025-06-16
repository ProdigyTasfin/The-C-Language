#include <stdio.h>
#include <string.h>

struct employee
{
    int age;
    float salary;
    char name[100];
};

void show(struct employee e);

void show(struct employee e){
    printf("Age is %d\nSalary is %.2f\nName is %s\n",e.age,e.salary,e.name);
}

int main()
{
    struct employee e1; 
    e1.age = 43; 
    strcpy(e1.name, "Tas Fin"); 
    e1.salary = 50432.22; 
    show(e1); 
    return 0;
}