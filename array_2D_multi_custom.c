#include <stdio.h>

int main() {
    int n;
    printf("Enter how many numbers you want: ");
    scanf("%d", &n);  // e.g., user enters 3

    int nums[n]; // dynamic array of size n
    int arr[n][10]; // 2D array to store multiplication tables

    // Now get the actual numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]); // e.g., user enters 2, 7, 9
    }

    // Fill the multiplication table
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = nums[i] * (j + 1);
        }
    }

    // Print the tables
    for (int i = 0; i < n; i++) {
        printf("Multiplication Table of %d:\n", nums[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", nums[i], j + 1, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
