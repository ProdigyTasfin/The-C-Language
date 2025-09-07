#include <stdio.h>

int main(){
     int i;
     for (int i = 0; i < 10; i++)
     {
        if (i == 5)
        {
            // break; // Exit the loop right now!!
            continue; // skip that value in the 'if' statements, 
        }
        
        printf(" The value: %d \n", i);
     }
     
    return 0;
}