#include <stdio.h>

int sum( int, int); // This is function prototype

int sum( int x, int y){ //This is function definition
    int c = x + y;
    printf( "The sum of both numbers %d \n" , c);
    return x+y;
}

int main(){

    int a = 2;
    int b = 3;
     
    sum(a,b);
    return 0;
}