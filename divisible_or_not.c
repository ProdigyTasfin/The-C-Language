#include <stdio.h>

//Check number is it divisible by 97 or not?

int main() {
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    
    int b = a % 97; // Use % for checking divisibility (remainder)

    if (b == 0) {
        printf("Yes, it's divisible\n");
    } else {
        printf("No, it's not divisible\n");
    }

    return 0;
}
