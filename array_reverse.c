#include <stdio.h>

// Function to print the array
void printArray(int a[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);  // Added space for clarity
    }
    printf("\n");
}

// Function to reverse the array
void reverse(int *ptr, int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        // Swap the elements at start and end
        temp = ptr[i];
        ptr[i] = ptr[n - i - 1];
        ptr[n - i - 1] = temp;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    printf("Original array: ");
    printArray(arr, 6);         // Before reversing

    reverse(arr, 6);            // Reverse the array

    printf("Reversed array: ");
    printArray(arr, 6);         // After reversing

    return 0;
}
