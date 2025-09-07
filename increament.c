#include <stdio.h>

int main(){
     int i = 5;

     printf("Value: %d \n", i);

    i = i + 5;

     printf( "Value: %d \n", i);


     printf("Value: %d \n", i);
     printf("Value: %d \n", i++);
     printf("Value: %d \n", ++i);

     /* i++ prints first then increment 
     ++i increment first then print*/

     printf("--i =%d\n", --i);

     printf("i-- = %d\n", i--);

     i += 2; 
     printf( "Value: %d \n", i);

     i -=2;
     printf(" Value: %d \n", i);

     i *=2;
     printf ("Value: %d \n", i);

     i /=2;
     printf("D Value: %d \n", i);

     i %=2;
     printf("P Value: %d \n", i);

     i <<=2;
     printf("L Value: %d \n", i);

     i >>=2;
     printf("G Value: %d \n", i);
    return 0;
}