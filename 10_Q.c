#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;             // pointer to first element
    int *end = arr + size - 1;    // pointer to last element
    int temp;

    while (start < end) {
        // swap values using pointers
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int n, i;
    printf("Enter your array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // call reverse function
    reverseArray(arr, n);

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
