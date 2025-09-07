#include <stdio.h>

// Create a two dimensional vector using structures in C.

typedef struct Vector
{
    int i;
    int j;
} vec;

int main(){
    vec v1;
    v1.i = 4;
    v1.j = 5;
    printf(" The value of vector is %di + %dj", v1.i, v1.j);

     
    return 0;
}