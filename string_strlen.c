#include <stdio.h>
#include <string.h>

/* Q: Write your own version of strlen function from <string.h> */

/* My own version of strlen */
int my_strlen(const char *str) {
    int length;

    for (length = 0; str[length] != '\0'; length++) {
        // nothing to do inside, just counting
    }

    return length;
}

int main() {
    char myString[] = " hello, everyone !";

    int len = my_strlen(myString);

    printf("Length of \"%s\" is: %d\n", myString, len);

    return 0;
}
