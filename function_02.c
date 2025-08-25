#include <stdio.h>

float finalprice(float discount)
{   int a,b;
    printf("Enter your Coupon Code SAVE10(1)/SAVE20(2): ");
    scanf("%d",&a);
    if (a == 1){
        b= discount - discount * 0.01;
    }
    else if ( a == 2){
        b = discount - discount * 0.02;
    }
    else b = discount;

    return b;
}

int main(){
     int amount,discount;
     printf("Enter Your Amount: ");
     scanf("%d",&amount);
     discount = finalprice(amount);
     printf("Final Price %d",discount);


    return 0;
}