#include <stdio.h>
#include <math.h>

int main() {
    int a = 2;
    double b = pow(a, a);  // pow returns a double
    printf("Value of b: %.0f\n", b);  // use %.0f to print as whole number
    return 0;
}
