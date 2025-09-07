#include <stdio.h>

int main() {
    int t;
    float p, i, r;

    printf("Principal (Price): ");
    scanf("%f", &p);

    printf("Time (in years): ");
    scanf("%d", &t);

    printf("Rate (annual interest rate in %%): ");
    scanf("%f", &r);

    i = (p * r * t) / 100;  // Correct formula...

    printf("Simple Interest: %.2f\n", i);

    return 0;
}
