#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter your nth term: ");
    scanf("%d", &n);

    int sum_a = 0;
    i = 1;
    while (i <= n)
    {
        sum_a += i;
        i++;
    }
    float sum_b = 0;
    i = 1;
    do 
    {   sum_b += 1.0 / i;
        i++;

    } while (i <= n);
    int sum_c = 0;
    i = 1;
    while (i < n) {
        sum_c += i * (i + 1);
        i += 2;
    }
    
    

    printf("Result: %d %.2f %d", sum_a, sum_b,sum_c);
    return 0;
}