#include <stdio.h>

int main() {
    char str1[100], str2[100]; // Declared the string
    int i; // Declaration 
    printf("Enter a string: "); // Input
    scanf("%s", str1); 

    for (i = 0; str1[i] != '\0'; i++) { // Check every character one by one
        str2[i] = str1[i]; // Equalized every character one by one 
    }
    str2[i] = '\0'; //At the end, add null character

    printf("Copied string: %s\n", str2); //Fully copied string
    return 0;
}
