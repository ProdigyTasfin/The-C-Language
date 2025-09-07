#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter your 1st numbers: ");
    scanf("%d", &a);
    printf("Enter your 2nd numbers: ");
    scanf("%d", &b);
    printf("Enter your 3rd numbers: ");
    scanf("%d", &c);
    printf("Enter your 4th numbers: ");
    scanf("%d", &d);

    if (a >= b && a >= c && a >= d) {
        printf("The greatest number is: %d\n", a);
    }
    else if (b >= a && b >= c && b >= d) {
        printf("The greatest number is: %d\n", b);
    }
    else if (c >= a && c >= b && c >= d) {
        printf("The greatest number is: %d\n", c);
    }
    else {
        printf("The greatest number is: %d\n", d);
    }

    return 0;
}
