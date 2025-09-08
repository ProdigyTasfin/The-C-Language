#include <stdio.h>

struct Employee {
    int id;
    char first_name[50];
    char last_name[50];
    char position[50];
    float salary;
};

int main() {
    struct Employee employees[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Enter First Name: ");
        scanf("%s", employees[i].first_name);

        printf("Enter Last Name: ");
        scanf("%s", employees[i].last_name);

        printf("Enter Position: ");
        scanf("%s", employees[i].position);

        printf("Enter ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\n---- Employee Records ----\n");
    for (i = 0; i < 5; i++) {
        printf("ID: %04d | Name: %s %s | Position: %s | Salary: %.2f\n",
               employees[i].id,
               employees[i].first_name,
               employees[i].last_name,
               employees[i].position,
               employees[i].salary);
    }

    return 0;
}
