#include <stdio.h>

int main(){
    int income;
    float tax = 0;

    printf("Enter Your Income: ");
    scanf("%d", &income);

    if (income < 250000) {
        printf("No Income Tax!\n");
    }
    else if (income >= 250000 && income < 500000) {
        tax = income * 0.05;
    }
    else if (income >= 500000 && income < 1000000) {
        tax = income * 0.20;
    }
    else if (income >= 1000000) {
        tax = income * 0.30;
    }

    if (income >= 250000) {
        float netIncome = income - tax;
        printf("Your Income Tax: %.2f\n", tax);
        printf("Your Net Income after Tax: %.2f\n", netIncome);
    }

    return 0;
}
