#include <stdio.h>

int main(){
     int a=1; int b=1;
     printf(" The value of a and b is : %d \n", a&&b);
     printf(" The value of a or b is : %d \n", a||b);
     printf(" The value of not(b) is : %d \n", !b);

     if ( a&&b) {
        printf("Both are true \n");
     }
     
// Both code is same as it is

     if (a){
     if (b){ printf("Both are trues\n");

     }}
    return 0;
}