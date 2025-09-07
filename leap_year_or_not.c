#include <stdio.h>

int main(){
     int year , a ;
     printf(" Enter Your Year: ");
     scanf ("%d" , &year);


     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf( "Yes, This is a leap year. \n");
     }
     else printf(" No this is not a leap year. \n");
    return 0;
}