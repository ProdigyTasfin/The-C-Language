#include <stdio.h>

int main() {
    int i = 6;
    int* j = &i;     // j points to i
    int** k = &j;    // k points to j (a pointer to a pointer)

    printf("The value of i is %d \n", i);       // Direct value
    printf("The value of i is %d \n", *j);      // Dereferencing j gives i
    printf("The value of i is %d \n", **k);     // Dereferencing k twice gives i

    printf("Address of i: %llu \n", (unsigned long long) &i);    // Address of i
    printf("Address stored in j: %llu \n", (unsigned long long) j);   // j holds &i // &j holds itself
    printf("Address stored in k: %llu \n", (unsigned long long) k);   // k holds &j

    return 0;
}
