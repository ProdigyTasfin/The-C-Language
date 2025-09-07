#include <stdio.h>

// If-else

//Q: (Discount Calculator) A shop gives a 10% discount if the purchase amount is more than 5000. 
// Write a C program that takes the purchase amount as input and prints the discount amount and the final bill.

int main()
{
     int price;
     float discount = 10.0 / 100;
     float discountedPrice;

     printf("Enter your purchase amount: ");
     scanf("%d",&price);

     if(price > 5000){
        discountedPrice = price - price * discount;
        printf("Your purchase amount is discounted: %.2f",discountedPrice);
     }
     else printf("Sorry! Sir you're not eligible for discount");

    return 0;
}