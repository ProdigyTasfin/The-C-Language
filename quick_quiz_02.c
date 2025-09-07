#include <stdio.h>

// Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.
int main() {
    int i = 0;
    while (i <= 20) {
        if (i >= 10) {
            printf("Natural number: %d\n", i);
        }
        i = i + 1;
    }
    return 0;
}
