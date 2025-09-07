#include <stdio.h>

/*Which of the following is used to appropriately reas a multi-word string. 

1) gets()
2) puts()
3) printf()
4) scanf()*/

int main(){
     char str[100];

    printf("Enter a string: ");
    gets(str);   // ⚠️ Not safe in modern C

    printf("You entered: %s\n", str);

    return 0;
} 
// Answer is getc()