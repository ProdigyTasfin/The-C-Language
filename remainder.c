#include <stdio.h>

int main() {
    int a,b,c,d;

    printf("Enter your Dividend value: ");
    scanf("%d", &a);

    printf("Enter your Divisor value: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        c = a/b;
        d = a%b;

        printf("Your Quotient value: %d\n", c);
        printf("Your Remainder value: %d\n", d);

        if (d == 0) {
            printf("✅ Yes, %d is divisible by %d.\n", a, b);
        } else {
            printf("❌ No, %d is not divisible by %d.\n", a, b);
        }
    }

    return 0;
}
