#include <stdio.h>

int change(int a);

int change(int a){
    a =77; //Misnomer (This is nothing just showing you fakeness by calling it change function.)
    return 0;
}

int main(){
     int b =22;
     change(b);
     printf(" b is %d \n" ,b);
    return 0;
}

// b's value is 22 and change function gets the b's value. Then, b's value's copy goes to the change function 
// where already int a declared by 77, and gets b's copy value. This is called 'call by value'.