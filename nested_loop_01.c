#include <stdio.h>

int main()
    {
        int i, j, a, n, multiply;
        printf("How many numbers you want: ");
        scanf("%d",&n);
        for(i = 1; i <= n; i++)
        {   printf("Enter your number: ");
            scanf("%d",&a);
            for( j = 1; j <=10; j++){
                multiply = a * j;
                printf("Multiplication table: %d x %d = %d\n", a, j, multiply);
            }
        }
    }