#include <stdio.h>
#include <string.h>

/* Q: Write your own version of strlen function from <string.h> */

/* My own version of strlen */
int my_strlen(const char *str) {
    int length = 0;

    // Loop through each character until the null terminator '\0'
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char myString[] = " hello, everyone !";

    int len = my_strlen(myString);

    printf("Length of \"%s\" is: %d\n", myString, len);

    return 0;
}
