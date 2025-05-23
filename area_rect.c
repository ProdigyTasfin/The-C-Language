#include <stdio.h>

int main(){
     int legth, width, area;
     printf("Length of rectangle : ");
     scanf("%d", &legth);
     printf("Width of the rectangle: " );
     scanf("%d", &width);
     area = legth * width;
     printf("Area of the rectangle: %d \n", area);
    return 0;
}