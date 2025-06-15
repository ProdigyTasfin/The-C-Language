#include <stdio.h>
#include <string.h>

int main() {
     char c = ('u');
     int count = 0;
     char str[]="me";
     for (int i = 0; i < strlen(str); i++) {
        if (str[i]== c){
            count = 1;
            break;
        }
     }
     if (count)
     {
        printf(" Yes, It contains. \n");

     }
     else {
        printf(" Nope, doesn't contain. \n");
     }
     printf("%d", count);
    return 0;
}