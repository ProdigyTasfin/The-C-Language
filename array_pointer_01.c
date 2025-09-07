#include <stdio.h>

/*
Q: Create an array of 10 numbers. Verify using pointer arithmetic that (ptr + 2)
   points to the third element where ptr is a pointer pointing to the first element of the array.

A:
*/

int main() {
    int numbers[10] = {45, 22, 43, 78, 98, 86, 90, 100, 66, 90};
    int* ptr = &numbers[0];

    // Showing pointer arithmetic: (ptr + 2) points to the third element
    printf("Value at ptr (1st element): %d\n", *ptr);            // 45
    printf("Value at (ptr + 1) (2nd element): %d\n", *(ptr + 1)); // 22
    printf("Value at (ptr + 2) (3rd element): %d\n", *(ptr + 2)); // 43

    // Loop to show how pointer moves
    printf("\n--- Full array using pointer ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}
