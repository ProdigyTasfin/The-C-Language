#include <stdio.h>

int main()
{
    float temp[3][4];
    int i,j, sum;
    float avg;

    for (i = 0; i < 3; i++){
        if(i == 0){
            printf("\nEnter New York's Temperature: ");
        }
        else if (i == 1){
            printf("\nEnter Mumbai's Temperature: ");
        }
        else printf("\nEnter Dhaka's Temperature: ");

        for ( sum = 0, j = 0; j < 4; j++)
        {
            scanf("%f",&temp[i][j]);
            sum += temp[i][j];
            avg = sum / 4.0;
        }
        printf("\nAverage temperature %.2f\n",avg);
    }
}