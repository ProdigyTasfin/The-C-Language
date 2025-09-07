#include <stdio.h>

int main(){
  // Can we solve the same problem in three different loops, true or false? ans: true, we can do.

  // while loop:

    int i= 1;
    int sum = 0;
    
    /* 
    
    while (i <= 10)
    { sum +=i;
      i++;
      printf(" Sum of first ten natural numbers: %d \n", sum);
    }
      
    */

    // for loop

    /* for ( int i =1; i <= 10;)
    { sum = sum +i;
      i++;
      printf(" Sum of first ten natural numbers: %d \n", sum);
    }
    
    */
   
    // do-while loop

    do {
        sum = sum + i;
        i++;
        printf("Sum of first ten natural numbers: %d \n", sum);
    } while (i <= 10);

    return 0;
}