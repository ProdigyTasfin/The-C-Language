#include <stdio.h>

int main(){
     int marks1, marks2, marks3;
     printf ("Enter Your Mark 1: ");
     scanf("%d" , &marks1);
     printf ("Enter Your Mark 2: ");
     scanf("%d" , &marks2);
     printf ("Enter Your Mark 3: ");
     scanf("%d" , &marks3);

     if (marks1 <33 || marks2 <33 || marks3 <33)
     {
        printf (" Sorry! You're failed because of below 33%% \n");
     }

     else if ((marks1+marks2+marks3)/3 < 40){
        printf(" Sorry! You're failed because of your less average percentage \n");
     }
     else
     {
        printf("You are passed! \n");
     }
     
    return 0;
}