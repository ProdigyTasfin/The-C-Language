#include <stdio.h>

// Q: Write a program to print the address of a variable. 
//    Use this address to get the value of the variable.

// A:

int main() {
    int i = 4;
    int* j = &i;

    printf("The address of variable i: %p \n", (void*)&i);
    printf("The value at address stored in j is: %d \n", *j);

    return 0;
}
