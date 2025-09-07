#include <stdio.h>

int main(){
     char str[] = {'a', 'b', 'c', '\0'};
     for (int i = 0; i < 3; i++)
     {
        printf("The whole string is: %s\n", str);

     }
     
    return 0;
}