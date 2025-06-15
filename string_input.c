#include <stdio.h>
#include <string.h>

/* Q: Write a program to take string as input from user using %c and %s 
      Confirm that the strings are equal 
*/

int main() {
    char str1[100];  // input with %s
    char str2[100];  // input with %c (character by character)
    char c;

    printf("Enter a string using %%s: ");
    scanf("%s", str1);   // whole word (until space)

    // Clear leftover newline after scanf
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Enter the same string again, character by character (press Enter to finish):\n");

    int i;
    for (i = 0; i < 100; i++) {
        scanf("%c", &c);
        if (c == '\n') {
            break; // stop if user presses Enter
        }
        str2[i] = c; // store the character
    }
    str2[i] = '\0';  // end string with null character

    printf("String 1 (%%s): %s\n", str1);
    printf("String 2 (%%c loop): %s\n", str2);

    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal!\n");
    } else {
        printf("The strings are NOT equal.\n");
    }

    return 0;
}

