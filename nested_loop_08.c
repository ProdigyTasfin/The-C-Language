#include <stdio.h>

int main() {
    int r, i, j, k;

    printf("Input the number of rows: ");
    scanf("%d", &r);
    for(i = 0; i < r; i++) {
        for(k = 0; k < i; k++) {
            printf("  ");
        }
        for(j = r - i; j > 0; j--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}