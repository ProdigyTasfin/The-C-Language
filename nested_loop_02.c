#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter your rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) // rows
    {
        for (j = 1; j <= i; j++) // stars per row
        {
            printf("*");
        }
        printf("\n"); // move to next line after printing stars
    }

    return 0;
}
