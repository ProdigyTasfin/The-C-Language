#include <stdio.h>
#include <string.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    if (strcasecmp(name, "Jamal") == 0) {
        printf("Jamal, you got 95%%\n");
    } else if (strcasecmp(name, "Farhan") == 0) {
        printf("Farhan, you got 95%%\n");
    } 

    else if (str
    cmp(name, "Shakib") == 0) {
        printf("Hello Shakib, your mark is 89%%.\n");
    }
    else if (strcmp(name, "Yamin") == 0) {
        printf("Hello Yamin, your mark is 92%%.\n");
    }
    else if (strcmp(name, "Ahona") == 0) {
        printf("Hello Ahona, your mark is 90%%.\n");
    }
    else {
        printf("Name not found. Please contact the admin.\n");
    }

    return 0;
}
