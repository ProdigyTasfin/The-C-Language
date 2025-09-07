#include <stdio.h>

// Sum of two vectors using structures.

typedef struct vector {
    int i;
    int j;
} Vector;

int main() {
    Vector v1, v2, sum;

    printf("Enter First Vector (i j): ");
    scanf("%d %d", &v1.i, &v1.j);

    printf("Enter Second Vector (i j): ");
    scanf("%d %d", &v2.i, &v2.j);

    // Sum of vectors
    sum.i = v1.i + v2.i;
    sum.j = v1.j + v2.j;

    printf("Sum Vector: %di + %dj\n", sum.i, sum.j);

    return 0;
}
