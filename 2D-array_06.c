#include <stdio.h>

int main ()
{
    int i, j, a, k, b;
    printf("Number of Customers: ");
    scanf("%d",&a);
    for(i = 1; i <=a; i++){
        for ( j = 1; j <= a; j++)
        {
            printf("\nRate the restaurant(1 to 5)\n");
            scanf("%d",&b);
            for(k = 1; k <= b; k++){
                printf("*");
            }
        }
        
    }
}