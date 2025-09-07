#include <stdio.h>

// Slice function: keep only str[m..n]
 void slice(char *str, int m, int n) {
    int i, j;

    for (i = m, j = 0; i <= n && str[i] != '\0'; i++, j++) {
        str[j] = str[i];
    }
    str[j] = '\0'; // end the sliced string
}

int main() {
    char myString[] = "Tasfin";

    printf("Original String: \"%s\"\n", myString);

    int start = 3;
    int end = 5;

    slice(myString, start, end);

    printf("Sliced String: \"%s\"\n", myString);

    return 0;
}
