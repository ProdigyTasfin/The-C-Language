#include <stdio.h>

float finalPrice(float amount)
{
    int code;
    float price;

    printf("Enter your Coupon Code SAVE10(1)/SAVE20(2): ");
    scanf("%d", &code);

    if (code == 1) {
        price = amount - amount * 0.10;  // 10% discount
    }
    else if (code == 2) {
        price = amount - amount * 0.20;  // 20% discount
    }
    else {
        price = amount;  // No discount
    }

    return price;
}

int main()
{
    float amount, final_amount;

    printf("Enter Your Amount: ");
    scanf("%f", &amount);

    final_amount = finalPrice(amount);
    printf("Final Price = %.2f\n", final_amount);

    return 0;
}
