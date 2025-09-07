#include <stdio.h>

/* If S[3] is a 1-D array of integers then *(S+3) refers to the 3rd element i) True ii) Flase iii) Depends*/

int main(){
     int numbers[3] = {0, 1, 2};
     int *S = &numbers[0];

     printf("The value %d\n", *(S + 3));
    return 0;
}

// FALSE. 