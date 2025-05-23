#include <stdio.h>

void reverse_array(int *start, int *end) {
    while (start < end) {
        // Swap elements using pointer arithmetic
        int temp = *start;
        *start = *end;
        *end = temp;
        
        // Move pointers towards the center
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int *ptr = arr; ptr < arr + size; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
    
    // Reverse the array
    reverse_array(arr, arr + size - 1);
    
    printf("Reversed array: ");
    for (int *ptr = arr; ptr < arr + size; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
    
    return 0;
}