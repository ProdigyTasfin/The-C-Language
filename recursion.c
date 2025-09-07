#include <stdio.h>

// What is Recursion?
// recursion is a technique in which a function calls itself to solve smaller parts of the same problem — 
// until it reaches a base case (which stops the recursion)..

// Function prototype
int factorial(int);

// Function definition
int factorial(int n) {
    if (n == 1 || n == 0) // Base case
        return 1;
    else
        return factorial(n - 1) * n; // Recursive case
}

int main() {
    int a = 3;
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}
