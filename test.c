#include <stdio.h>
#include <math.h>

int main(){

    // LAB - 02

    // int height, width, length;
    // printf("Enter Your Height: ");
    // scanf("%d", &height);
    // printf("Enter Your Width: ");
    // scanf("%d", &width);
    // printf("Enter Your Length: ");
    // scanf("%d", &length);
    
    // printf(" Your Volume is: %d", height * width * length);


    // double length, width, height;
    // printf("Enter Your Height: ");
    // scanf("%lf" , &height);
    // printf("Enter Your Length: ");
    // scanf("%lf" , &length);
    // printf("Enter Your Width: ");
    // scanf("%lf" , &width);

    // printf(" Your Volume is: %lf", height * width * length);

    // double f;
    // int c ;

    // printf("Enter Your Fahrenheit: ");
    // scanf("%lf" , &f);

    // c = (5.0/9.0) * (f-32);


    // printf("Temperature in Fahrenheit: %0.lf\n", f);
    // printf("Temperature in Celsius: %d", c);

    // double r, a, p;

    // printf("Enter the radius: ");
    // scanf("%lf", &r);

    // a = 3.1415926* r* r;
    // p = 2 * 3.1415926 * r;

    // printf("Area = %lf\n", a);
    // printf("Perimeter = %lf", p);

    double x2, x1, y2, y1;

    printf("Enter Point X1: ");
    scanf("%lf", &x1);
    printf("Enter Point X2: ");
    scanf("%lf", &x2);
    printf("Enter Point Y1: ");
    scanf("%lf", &y1);
    printf("Enter Point Y2: ");
    scanf("%lf", &y2);

    double X = x2 - x1;
    double Y = y2 - y1;

    double distance = sqrt(pow(X, 2) + pow(Y, 2));

    printf("The distance is: %lf\n", distance);


    return 0;

}