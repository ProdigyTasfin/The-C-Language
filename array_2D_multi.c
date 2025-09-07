#include <stdio.h>

/* Q: Create an array of size 3 X 10 containing multiplication tables of the numbers 2, 7, and 9 respectively */

int main() {
    int tables[3][10]; // 3 rows for 2, 7, 9; 10 columns for each multiplication table

    int nums[3] = {2, 7, 9}; // The three numbers

    // Fill the array
    for (int i = 0; i < 3; i++) {           // for each number (2, 7, 9)
        for (int j = 0; j < 10; j++) {      // for each multiplier (1 to 10)
            tables[i][j] = nums[i] * (j + 1);
        }
    }

    // Print the tables
    for (int i = 0; i < 3; i++) {
        printf("Multiplication Table of %d:\n", nums[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", nums[i], j + 1, tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}
