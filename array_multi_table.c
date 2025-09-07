#include <stdio.h>

/* Q: Write a program to create an array of 10 integers and store multiplication table of 5
in it
A: */

int main(){
     int multi_table[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
     int* ptr = &multi_table[0];

     for (int i = 0; i < 10; i++)
     {
        printf("Element %d: %d\n", i, *(i + 1));
     }
     
    return 0;
}