#include <stdio.h>

//Nested-Loop

//(Multiplication Table) Write a C program to print the multiplication tables from 1 to 10 using nested loops.

int main()
{   int i,j,a,b; //Decleration

    printf("How many numbers you want to print: "); // Input How many numbers
    scanf("%d",&a);

    for(i = 1; i <=10; i++)
    {                                   //NESTED LOOP
        printf("Enter Your Number: ");
        scanf("%d",&b);
        for(j =0;j <=a; j++){
            printf("Multiplication Table: ");
            printf("%d x %d = %d", i,b, i*b);
        }
    }
     
    return 0;
}