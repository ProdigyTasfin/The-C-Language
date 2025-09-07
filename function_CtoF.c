#include <stdio.h>

//Write afunction to convert Celsius temp. into Fahrenheit.

float temp ( float c, float f);

float temp (float c, float f){
    f= 9*c/5+32;
    return f;
}

int main(){
     float c, f;
     printf(" Enter your temp in Celsius: " );
     scanf("%f", &c);
     float result = temp(c, f);
     printf(" Temp in Fahrenheit: %.2f \n" , result);
    return 0;
}