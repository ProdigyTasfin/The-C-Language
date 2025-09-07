#include <stdio.h>

// Q: Write a program having a variable 'i'. Print the address of'i'.Pass this variable to a function and print its
// address. Are thesees same? Why?

//A:    Both addresses are the same — because you're passing the address of i to the function. 
//      In C, arguments are passed by value, but when you pass a pointer, 
//      you're passing the value of the address, so both point to the same memory.

// Function that takes a pointer to int

void function(int* a) {
    printf("The address inside function is: %p\n", (void*)a);
}

int main() {
    int i = 4;
    int*j = &i;

    printf("The value of i from address: %d\n", *j);

    printf("The address of i in main is: %p\n", (void*)&i);

    function(&i); // Passing the address of i

    return 0;
}