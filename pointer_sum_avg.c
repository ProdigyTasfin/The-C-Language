#include <stdio.h>

//Q: Write a program using a function which calculates the sum and average of two numbers. 
// Use pointers and print the value of sum and average in main()

// A:

float sum(float*, float*);
float avg(float*, float*);

float sum(float* a, float* b) {
    return *a + *b;
}

float avg(float* c, float* d) {
    return (*c + *d)/2 ;
}

int main(){
     float i = 4;
     float j = 7;
     float *k = &i;
     float *l = &j;
     printf("Sum of the value: %.0f \n", sum(&i, &j));
     printf("Average of the value: %.2f \n", avg(&i, &j));
    return 0;
}