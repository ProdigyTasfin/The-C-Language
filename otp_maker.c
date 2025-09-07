#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     int otp =0;

     srand(time(0));
     otp = rand() % 9000 + 1000;

     printf(" Sir, your OTP is: %d \n" , otp);
    return 0;
}