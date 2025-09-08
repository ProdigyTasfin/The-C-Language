#include <stdio.h>
#include <string.h>

int main() {
    char c = 'm';
    int count = 0;
    char str[] = "me";
    int len = strlen(str);  // store length once

    for (int i = 0; i < len; i++) {
        if (str[i] == c) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
