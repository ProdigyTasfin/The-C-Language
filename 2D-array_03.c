#include <stdio.h>

int main() {
    float t[7][3], sum = 0;
    int i, j;

    printf("Input data:\n");


    for (i = 0; i < 7; i++) {  
        printf("Day-%d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Temp-%d = ", j + 1);
            scanf("%f", &t[i][j]);
        }
    }


    for (i = 0; i < 7; i++) {
        for (j = 0; j < 3; j++) {
            sum += t[i][j];
        }
    }
    
    printf("Sum = %.2f", sum);

    return 0;
}
