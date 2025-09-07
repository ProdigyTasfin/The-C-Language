#include <stdio.h>

int main(){
    
 /*  1. while loop

      int i = 0;
      while (i < 4)
      {
         printf (" Happy Birthday! \n");
         i = i + 1; // Same as i++
      }
     
     1.01. forever loop

     int i=0;
     while (1)
     {
        printf (" Happy Birthday! \n");
        i++;
     } 
        */ 


    int i = 0;

    while (1) {
        printf("i = %d\n", i);
        i++;

        if (i > 10) {
            break;  // safely stop after 10
        }
    }
     
    return 0;
}