#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter your rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) // rows
    {
        for (j = i; j >= 1; j--) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
