#include <stdio.h>

//Q: Write a program to change the value of a variable to ten times of its current value.

// A:

int valueChange(int*);

int valueChange(int* a){
    *a *= 10;
    return *a;
}

int main(){
     int i = 5;
     int* j = &i;

     printf( "The value of i is: %d \n", valueChange(&i));

    return 0;
}