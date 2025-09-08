#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    int len;
    printf("Enter your word: ");
    scanf("%s", a);

    len = strlen(a);

    if (len >= 8 && len <= 10 && a[0] == 'A' && a[len - 1] == 'A') {
        printf("Word is valid\n");
    } else {
        printf("Word is invalid\n");
    }

    return 0;
}
