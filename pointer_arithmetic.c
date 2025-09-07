#include <stdio.h>

int main(){
     float i = 4.0;
     float *j = &i;
     printf(" The address of i is: %llu \n", (unsigned long long) &i);
     printf(" The address of i is: %llu \n", (unsigned long long) j);
     j++;
     printf(" The address of i is: %llu \n", (unsigned long long) j);
    return 0;

}
 // Char 

