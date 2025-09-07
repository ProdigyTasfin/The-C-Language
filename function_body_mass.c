#include <stdio.h>

float body_Mass(float m, float F);

float body_Mass( float m, float F){
    F = m * 9.8;
    return F;
}

int main(){

    float m, F;
    printf(" Enter your object's mass: ");
    scanf("%f", &m);
    float result = body_Mass(m,F);
    printf(" Weight of your object: %.2f N \n", result);
     
    return 0;
}