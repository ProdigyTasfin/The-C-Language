#include <stdio.h>

//What will the following line produce in a C program: printf("%d %d %d \n" , a, ++a, a++);

/* You thought C would:

Do things left to right, one by one — like a human reading.

But in C, especially in a single line like this:

printf("%d %d %d\n", a, ++a, a++);

there is no guarantee of the order in which a, ++a, and a++ will be evaluated. */

int main(){
     int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}