#include <stdio.h>

int main()
{   int days[7], count = 0, sum =0;
    float avg;

    printf("Enter Your 7 Days Steps: ");
    for(int i = 0; i<7; i++){
        scanf("%d", &days[i]);
        sum = sum + days[i];
        avg = sum / 7.0;
        if(days[i]>=10000){
            count++;
        }        
    }

    printf("The average of 7 days: %.2f\n", avg);
    printf("Total steps you walked: %d\n", sum);
    printf("10,000 steps you walked in this week: %d day(s)", count);


}