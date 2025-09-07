#include <stdio.h>

int main() {
    double d = 3.14159;
    int i = 42;
    char str[] = "Hello"; 
    

    printf("Value of double: %lf, Address: %p\n", d, (void*)&d);
    printf("Value of int: %d, Address: %p\n", i, (void*)&i);
    printf("Value of string: %s, Address: %p\n", str, (void*)str);

    return 0;
}