#include <stdio.h>

int main(){
     int marks[5];

     printf("Enter marks of the students \n");

     for (int i = 1; i <= 5; i++)
     {
        scanf("%d", &marks[i]);
     }

     for (int i = 1; i <= 5; i++)
     {
        printf("Marks of the %d. students %d \n", i, marks[i]);
     }
     
    return 0;
}