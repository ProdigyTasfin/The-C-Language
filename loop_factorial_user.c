#include <stdio.h>

// write a program to calculate the factorial of a given number using a for loop. 

int main() {
    int n;
    int i =1;
    int fact = 1;  // Move this outside the loop

    printf("Enter your number: ");
    scanf("%d", &n);

    // for (int i = 1; i <= n; i++) {
    //     fact = fact * i;
    // }

    while (i <=n)
    {   fact = fact * i;
        i++;
    }
    

    printf("Factorial of your given number (%d) is: %d\n", n, fact);

    return 0;
}
