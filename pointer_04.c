#include <stdio.h>

int main() {
    int arr[10];
    int *p = arr;
    int i;
    double sum = 0, avg;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", p + i);       // input into arr[i]
        sum += *(p + i);          // add value to sum
    }

    avg = sum / 10.0;             // calculate average
    printf("\nAverage: %.2lf\n", avg);

    printf("\nValue\tDifference from Mean\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%.2lf\n", *(p + i), *(p + i) - avg);
    }

    return 0;
}
