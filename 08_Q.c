#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, sum = 0;

    printf("Enter your 3x3 Matrix: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
        if (a[i]==a[j]){
                sum += a[i][j];
        }
        }
    }

    printf("Main Diagonal: %d",sum);
}