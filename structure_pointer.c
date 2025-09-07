#include <stdio.h>

struct employee
{
    int age;
    float salary;
    char name[100];
};

int main()
{
    struct employee e1;
    e1.age= 56;
    struct employee *ptr;
    ptr = &e1;
    printf("1.%d \n", (*ptr).age);
    printf("2.%d \n", ptr->age);
    return 0;
}