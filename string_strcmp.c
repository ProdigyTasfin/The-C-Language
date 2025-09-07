#include <stdio.h>

int my_strcmp(const char *s1, const char *s2) {
    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }

    // One string ended: compare last chars
    return s1[i] - s2[i];
}

int main() {
    char str1[] = "pineapple";
    char str2[] = "apple";

    int result = my_strcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("\"%s\" is less than \"%s\"\n", str1, str2);
    } else {
        printf("\"%s\" is greater than \"%s\"\n", str1, str2);
    }

    return 0;
}