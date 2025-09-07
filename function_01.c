#include <stdio.h>

int calculateFine(int days)
{
    int taka = 0;

    if (days >= 1 && days <= 5)
    {
        taka = 2 * days;
    }
    else if (days >= 6 && days <= 10)
    {
        taka = 3 * days;
    }
    else if (days > 10)
    {
        taka = 5 * days;
    }
    else
    {
        taka = 0;
    }

    return taka;
}

int main()
{
    int days, fine;

    for (int i = 1; i <= 5; i++)
    {
        printf("Enter Days late: ");
        scanf("%d", &days);

        fine = calculateFine(days);

        printf("Fine = %d taka\n", fine);
    }

    return 0;
}
