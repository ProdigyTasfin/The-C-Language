#include <stdio.h>

struct employee {
    char name[100];
    int code;
    float salary;
};

int main(){
     struct employee facebook[100];
     
     facebook[0].code =100;
     facebook[1].code =77;

    return 0;
}