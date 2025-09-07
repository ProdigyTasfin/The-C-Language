#include <stdio.h>

/* Q: Write a program containing a function which counts the number of positive integers in an array */

int countPositive(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, -8, 9, 10};
    int size = sizeof(a) / sizeof(a[0]);

    int result = countPositive(a, size);
    printf("Number of positive integers: %d\n", result);

    return 0;
}
