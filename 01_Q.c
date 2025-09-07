#include <stdio.h>

int main()
{
    int a[4][4], i, j, rowSum, colSum;
    printf("Input the value: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Your input 4x4 matrix: ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \n", a[i][j]);
        }
    }
    // RowSum
    for (i = 0; i < 4; i++)
    {
        rowSum = 0;
        for (j = 0; j < 4; j++)
        {
            rowSum += a[i][j];
        }
        printf("%d. %d of Row Sum\n", i + 1, rowSum);
    }
}