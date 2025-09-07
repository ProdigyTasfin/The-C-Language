#include <stdio.h>

//What data type with 3.0/8 - 2 return?

int main(){
    //  int a= 3;
    //  int b= 8;
    //  int c= a/b;
    //  printf("Value: %d",c); answer 0

    float d, a= 3.0;
    int b= 8, c = 2;
    d = a/b - c;
    printf("Value: %.3f\n",d);
    return 0;
}