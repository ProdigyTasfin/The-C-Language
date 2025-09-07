#include <stdio.h>

int main(){
     int a;
     printf("Enter Your Age: ");
     scanf("%d",&a);

     if (a<18){
        printf("Hi! You  can't drive. \n");
     }
     else if (a<30){
        printf(" Hello! You can drive, Sir. \n");
     }

     else if(a<45){
      printf("Hello! You can drive and vote, Sir. \n ");
     }

     else {
      printf("Hello! You are senior citizen, Sir. \n");
     };

    return 0;
}