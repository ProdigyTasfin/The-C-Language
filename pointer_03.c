#include <stdio.h>

int main() {
    int arr[10], even[10], odd[10];
    int *p = arr;
    int *pe = even, *po = odd;
    int i, ecount = 0, ocount = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", p + i);
        if (*(p + i) % 2 == 0) {
            *(pe + ecount) = *(p + i);
            ecount++;
        } else {
            *(po + ocount) = *(p + i);
            ocount++;
        }
    }

    printf("\nEven numbers: ");
    for (i = 0; i < ecount; i++) {
        printf("%d ", *(pe + i));
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < ocount; i++) {
        printf("%d ", *(po + i));
    }

    printf("\n");
    return 0;
}
