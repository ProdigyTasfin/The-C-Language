#include <stdio.h>

/* 
Problem 3: Write a program to create an array of 10 integers 
and store the multiplication table of 5 in it.

Q: Repeat problem 3 for a general input provided by the user using scanf.
*/

int main() {
    int multi_table[10];
    int num;  // To store the user's input

    printf("Enter the number to generate its multiplication table: ");
    scanf("%d", &num);  // Take user input

    // Store the multiplication table in the array
    for (int i = 0; i < 10; i++) {
        multi_table[i] = num * (i + 1);
    }

    // Print the table using pointer arithmetic
    int* ptr = multi_table;
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}
