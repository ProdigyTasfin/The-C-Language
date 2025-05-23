#include <stdio.h>

int main() {
    float radius, area;
    printf("Enter your radius: ");
    scanf("%f", &radius);  // use %f for float input

    area = 3.1416 * radius * radius;  // area = πr²

    printf("Area of your circle is: %.2f\n", area);  // %.2f to show 2 decimal points
    return 0;
}
