#include <stdio.h>

int main()
{
    int temp, original, reverse = 0;
    printf("Enter your number: ");
    scanf("%d", &original);

    temp = original; 

    while (temp > 0) {
        int digit = temp % 10;          
        reverse = reverse * 10 + digit; 
        temp = temp / 10;               
    }

    if (original == reverse) {
        printf("This is a palindromic number.\n");
    } else {
        printf("This is not a palindromic number.\n");
    }

    return 0;
}
