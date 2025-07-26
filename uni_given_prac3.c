#include <stdio.h>

int main()
{
    float fuel[5], max = 0, sum = 0;

    printf("Enter fuel usage for 5 trips:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &fuel[i]); // Use &fuel[i], not fuel[i]
        sum = sum + fuel[i];   // Add to sum

        max = fuel[0]; // Assign first value directly before the loop
        for (int i = 1; i < 5; i++)
        {
            if (fuel[i] > max)
            {
                max = fuel[i];
            }
        }
    }

    printf("\nTotal fuel used: %.2f liters\n", sum);
    printf("Maximum fuel used in a trip: %.2f liters\n", max);

    return 0;
}
