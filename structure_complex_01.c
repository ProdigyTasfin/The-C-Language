#include <stdio.h>

// Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function.
// The values must be taken as an input from the user. 

typedef struct c {
    int real;
    int imaginary;
} Complex;

void display(Complex c) {
    printf("The value of Complex Number is %d + %di\n", c.real, c.imaginary);
}

int main() {
    Complex carr[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter real part: ");
        scanf("%d", &carr[i].real);

        printf("Enter imaginary part: ");
        scanf("%d", &carr[i].imaginary);

        display(carr[i]); // ✅ Correct function call
    }

    return 0;
}
