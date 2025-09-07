#include <stdio.h>

int main(){
     int radius;
     printf("Radius of the circle: ");
     scanf("%d", &radius);
     float area;
     area= radius * radius* 3.1416;
     printf ("Area of the circle is: %.2f ", area);
     int height;
     printf("The height of the cylinder: ");
     scanf("%d", &height);
     float area_of_cylinder;
     area_of_cylinder = 3.1416*radius*radius*height;
     printf("The volume of the cylinder: %.2f ", area_of_cylinder);
    return 0;
}