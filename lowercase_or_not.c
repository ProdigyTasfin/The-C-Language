#include <stdio.h>

int main(){
     char lowercase;
     printf ("Enter character:");
     scanf("%c   " , &lowercase);
     
     if ((lowercase >= 'a' && lowercase <= 'z'))
     {
        printf( "Yes, this is a lowercase\n");
     }

     else printf( "Sorry, Invalid Character \n");
     
    return 0;
}