#include <stdio.h>

/* Q: Create a 3D array and print the address of its elements in increasing order */

int main() {
    int arr[2][3][4];  // 2 layers, 3 rows, 4 columns

    // Print the addresses
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("Address of arr[%d][%d][%d] = %p\n", i, j, k, (void*)&arr[i][j][k]);
            }
        }
    }

    return 0;
}
