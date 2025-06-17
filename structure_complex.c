#include <stdio.h>

//Write a program with a structure representing a complex number.

struct complex
{
    int real;
    int complex;
};

int main(){
     struct complex c1;

     printf(" What is your real part: ");
     scanf("%d", &c1.real);
     printf(" What is your complex part: ");
     scanf("%d", &c1.complex);
    
     // ✅ Print the complex number
    printf("The complex number you entered: %d + %di\n", c1.real, c1.complex);

    // ✅ Example condition checks (after input)
    if (c1.complex == 0) {
        printf("This is a real number (complex part is zero).\n");
    }
    if (c1.real == 0) {
        printf("This is a purely complex number (real part is zero).\n");
    }
    return 0;
}