#include <stdio.h>

void findMaxMin1D(int *arr, int n, int *max, int *min) {
    *max = *min = arr[0];  // start with first element

    for(int i = 1; i < n; i++) {
        if(*(arr + i) > *max)
            *max = *(arr + i);
        if(*(arr + i) < *min)
            *min = *(arr + i);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;
    findMaxMin1D(arr, n, &max, &min);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
