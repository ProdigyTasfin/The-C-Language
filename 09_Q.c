#include <stdio.h>

int main()
{
    int x[10], k, j;
for (k = 0; k <= 6; k += 2) {
    x[k] = 3 * k;
    x[k + 1] = k + 2;
}
for (j = 0; j <= 6; j += 3)
    x[j] = x[j] + x[j + 1] + 1;
for (k = 0; k <= 6; ++k)
    printf("%d ", x[k]);

     
    return 0;
}