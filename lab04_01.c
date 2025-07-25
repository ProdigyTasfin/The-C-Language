#include <stdio.h>

int main()
{
    int A[7], total = 0, days =0;
    float avg = 0;

    printf("7 days of your steps: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &A[i]);
        total = total + A[i];
        avg = total / 7.0;

        if (A[i] >= 10000) {
            days++;
        }
        
    }
    
    printf("Your Average Step: %.2f", avg);
    printf("Your Total Steps: %d", total);
    printf("Days you walked 10,000 or more steps: %d\n", days);
}