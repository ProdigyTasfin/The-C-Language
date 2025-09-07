#include <stdio.h>
#include <string.h>

// Declare ONE struct for all employees
struct employee {
    char name[100];
    int age;
    float salary;
};

int main() {
    struct employee e1, e2, e3;

    // Employee 1 input
    printf("Enter name for employee 1: ");
    scanf("%s", e1.name);
    printf("Enter age for employee 1: ");
    scanf("%d", &e1.age);
    printf("Enter salary for employee 1: ");
    scanf("%f", &e1.salary);

    // Employee 2 input
    printf("Enter name for employee 2: ");
    scanf("%s", e2.name);
    printf("Enter age for employee 2: ");
    scanf("%d", &e2.age);
    printf("Enter salary for employee 2: ");
    scanf("%f", &e2.salary);

    // Employee 3 input
    printf("Enter name for employee 3: ");
    scanf("%s", e3.name);
    printf("Enter age for employee 3: ");
    scanf("%d", &e3.age);
    printf("Enter salary for employee 3: ");
    scanf("%f", &e3.salary);

    // Print the details
    printf("\nEmployee 1: %s %d %.2f\n", e1.name, e1.age, e1.salary);
    printf("Employee 2: %s %d %.2f\n", e2.name, e2.age, e2.salary);
    printf("Employee 3: %s %d %.2f\n", e3.name, e3.age, e3.salary);

    return 0;
}
