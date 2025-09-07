#include <stdio.h>

int main()
{ int book[8], count = 0;

    printf("Input Book Price: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &book[i]);
    if( book[i]>= 500){
        count++;
    }
    
    }

    printf("Premimum Books are: %d", count);
    printf("\nPremium Book Prices: ");
    for (int i = 0; i < 8; i++)
    {
        if (book[i] >= 500)
        {
            printf("%d ", book[i]);
        }
    }


}