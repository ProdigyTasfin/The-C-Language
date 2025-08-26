#include <stdio.h>

int main()
{
    float temp[3][7];
    int i, j, maxCity, maxDay;
    float max;
    for (i = 0; i < 3; i++)
    {
        printf("city%d: ", i + 1);
        for (j = 0; j < 7; j++)
        {
            scanf("%f", &temp[i][j]);
        }
    }
    max = temp[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (max < temp[i][j])
            {
                max = temp[i][j];
                maxDay = j;
                maxCity = i;
            }
        }
    }
    printf("Hottest temperature = %.2f on Day %d in City%d", max,maxDay+1,maxCity+1);
    return 0;
}