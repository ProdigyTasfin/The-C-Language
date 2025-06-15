#include <stdio.h>
#include <string.h>

int main(){
     char password[] = "Ubtgjo";
     for (int i = 0; i < strlen(password); i++)
     {
        password[i] = password[i] - 1;
     }
     
     printf("%s", password);
     
    return 0;
}