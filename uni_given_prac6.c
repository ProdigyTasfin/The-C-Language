#include <stdio.h>

int main()
{
    int price[19], count = 0;
    printf("Enter Your Ticekt's Price: ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &price[i]);
        if (price[i] >= 1000)
        {   count = count + 1;
        }
    }
    printf("%d people(s) are booking for VIP area. \n", count);
    
}
