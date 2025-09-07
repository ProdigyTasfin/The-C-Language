#include <stdio.h>


// Write a program using recursion to calcualte  n(th) element of Fibonacci series.

// Function prototype
int fibonacci(int);

// Recursive function to find nth Fibonacci number.
int fibonacci(int n) {
    if (n == 0)          // Base case.
        return 0;
    else if (n == 1)     // Base case.
        return 1;
    else                 // Recursive case.
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int a;
    printf("Enter nth term of your Sequence: ");
    scanf("%d", &a);

    // Print Fibonacci numbers from 0 to a
    for (int i = 0; i <= a; i++) {
        printf("The fibonacci of %d is %d\n", i, fibonacci(i));
    }

    return 0;
}
