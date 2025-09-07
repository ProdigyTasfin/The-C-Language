#include <stdio.h>

// Question: Write a program to check whether a given number is prime ornot using loops.

int main() {
    int n;
    int i = 2;
    int isPrime = 1; // Assume n is prime initially

    printf("Enter your number: ");
    scanf("%d", &n);

//     if (n <= 1) {
//         isPrime = 0; // 0 and 1 are not prime
//     } else {
//         for (i = 2; i <= n / 2; i++) { // check from 2 to n/2
//             if (n % i == 0) {
//                 isPrime = 0; // found a factor, not prime
//                 break;       // no need to check further
//             }
//         }
//     }

//     if (isPrime == 1) {
//         printf("%d is a Prime number.\n", n);
//     } else {
//         printf("%d is NOT a Prime number.\n", n);
//     }

//     return 0;
// }

// if (n<=1) {

//     isPrime = 0;
// }
// else {
//     while (i <= n/2) 
//     {
//         if (n % i == 0)
//         {
//             isPrime = 0;
//             break;
//         }
//         i++;
//     }
    
// };

// if (isPrime == 1 )
// {
//     printf(" %d Yeah this is a prime number \n ", n);

// }
// else {
//         printf("%d is NOT a Prime number.\n", n);
//     }

//     return 0;
// }

 if (n <= 1) {
        isPrime = 0;
    } else if (n == 2) {
        isPrime = 1;
    }
    else {
        do {
            if (n % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
            i++;
        } while (i <= n / 2);
    }

    if (isPrime == 1) {
        printf("%d is a Prime number.\n", n);
    } else {
        printf("%d is NOT a Prime number.\n", n);
    }

    return 0;
}
