#include <stdio.h>

// Write a program to find grade of a student given his marks based on below
int main(){
     int  a;
     printf(" Enter Your Number: ");
     scanf("%d" ,&a);
     if (a > 90 && a <= 100)
     {
        printf("Congratulations! Your grade is A \n");
     }
     else if ( a > 80 && a <= 90)
     printf(" Congratulations! Your grade is B \n");

     else if ( a > 70 && a <= 80)
     printf(" Congratulations! Your grade is C \n");

     else if ( a > 60 && a <= 70)
     printf(" Congratulations! Your grade is D \n");

     else if ( a > 50 && a <= 60)
     printf(" Congratulations! Your grade is E \n");

     else if ( a >= 0 && a <= 50 )
     printf(" Sorry!  Your grade is F \n ");
     
    return 0;
}