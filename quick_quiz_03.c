#include <stdio.h>

// Write a program to print first 'n' natural numbers using do-while loop.
int main() {
    /* int n, i = 1;  // i starts from 1, not user input

    printf("Enter the value of limit n: ");
    scanf("%d", &n);

    do {
        printf("Natural number: %d\n", i);
        i++;
    } while (i <= n);

    */

    // Write a program to print first 'n' natural numbers using for loop
    
    int n, i;  // i starts from 1, not user input

    printf("Enter the value of limit n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf(" The Natural Number is: %d \n", i);
    }
    

    return 0;
}
