#include <stdio.h>

//Question: Write a program to calculate the sum of the numbers occuring in the multiplication table of 8. (Consider 8 x 1 to 8 x 10). 
 
int main (){
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        int multi = 8 * i;
        sum = sum+multi;  // accumulate the result
        printf("8 x %d = %d\n", i, multi);  // optional: show each step
    }

    printf("Total sum of the multiplication table of 8: %d\n", sum);

    return 0;
}