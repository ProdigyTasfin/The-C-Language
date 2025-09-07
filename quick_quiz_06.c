#include <stdio.h>

//Create a 2-d array by taking input from the user. Write adisplay function to print the content of this 2-d array on
//the screen.


// Function to display a 2D array
void displayArray(int rows, int cols, int arr[rows][cols]) {
    printf("The 2D array is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // new line after each row
    }
}

int main() {
    int rows, cols;

    // Ask user for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the array
    int marks[rows][cols];

    // Take input from the user
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }

    // Call the function to display the array
    displayArray(rows, cols, marks);

    return 0;
}