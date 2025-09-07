#include <stdio.h>

int main()
{
    float temp[10], min, max;
    printf("Enter Temperature for this 10 days:\n");

    for (int i = 0; i < 10; i++) 
    {
        scanf("%f", &temp[i]);
    }

    max = temp[0];
    min = temp[0];

    for (int i = 1; i < 10; i++)
    {
        if (temp[i] > max)
        {
            max = temp[i];
        }
    }

    for (int i = 1; i < 10; i++)
    {
        if (temp[i] < min)
        {
            min = temp[i];
        }
    }

    printf("Highest Temperature: %.2f\n", max);
    printf("Lowest Temperature: %.2f\n", min);

    return 0;
}
