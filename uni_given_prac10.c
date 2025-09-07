#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("INPUT: ");
    scanf("%d", &n);

    while (n > 0)
    {
        if (n % 10 == 0)
        {
            count++;
        }
        n = n / 10; 
    }

    printf("zeros are %d", count);

    return 0;
}
