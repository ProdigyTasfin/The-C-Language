#include <stdio.h>

int main ()
{
    int i, j, a, b;
    printf("Number of Customers: ");
    scanf("%d",&a);
    for(i = 1; i <=a; i++){
        {
            printf("\nRate the restaurant(1 to 5)\n");
            scanf("%d",&b);
            for ( j = 1; j <= b; j++){
                printf("*");
            }
        }
        
    }
}