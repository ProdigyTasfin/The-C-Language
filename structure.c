#include <stdio.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee e1 = {12, 54.56, "Tas Fin"};
    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    return 0;
}
