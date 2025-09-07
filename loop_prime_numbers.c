#include <stdio.h>

// Program to print all prime numbers from 1 to 100

int main() {
    int i, n;
    int isPrime;

    for (n = 2; n <= 100; n++) {
        isPrime = 1;  // Assume n is prime

        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d is a Prime number\n", n);
        }
    }

    return 0;
}
