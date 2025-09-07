#include <stdio.h>

int main() {
     int n;
     printf(" Enter your number: ");
     scanf("%d", &n);

     for (int i = 10; i >= 1; i--)

     { int m = n*i;
        printf(" Reversed Multiplication Table: %d x %d = %d \n", n, i, m);
     }
     
    return 0;
}