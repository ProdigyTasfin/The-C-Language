#include <stdio.h>

int main()
{   char a[50];
    int len = 0;
    
    printf("Enter Your Password: ");
    scanf("%s",a);

    while (a[len] != '\0'){
        len++;
    }
    if(len >= 8 && len <= 10 && a[0]=='A'&& a[len-1]=='A'){printf("Valid Password\n");}
    else printf("INVALID\n");     
    return 0;
}