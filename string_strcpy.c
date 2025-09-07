#include <stdio.h>
#include <string.h>

/* My own version of strcpy */
void my_strcpy(char *dest, const char *src) {
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    dest[i] = '\0'; // Don’t forget null terminator!
}

int main() {
    char source[] = " Hello, Everyone! ";
    char destination[50]; // Make sure it's big enough

    my_strcpy(destination, source);

    printf("Copied string: \"%s\" \n", destination);

    return 0;
}