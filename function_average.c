#include <stdio.h>

//Write aprogram using function to find average of three numbers.

int average(int x, int y, int z);

int average (int x, int y, int z){
    int c = (x + y + z) / 3;
    return c;
}


int main(){
    int x, y, z;

     printf (" Enter your 1st value : ");
     scanf("%d" , &x);
     printf (" Enter your 2nd value : ");
     scanf("%d" , &y);
     printf (" Enter your 3rd value : ");
     scanf("%d" , &z);

     int result = average(x, y, z);
    printf("The average is: %d\n", result);

     return 0;

}
