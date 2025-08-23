#include <stdio.h>

int main ()

{
    int i, j, a; 
    printf("Enter your limit of your number: ");
    scanf("%d",&a);
    for (i = 1; i<= a; i++){
        for (j =1; j <=10; j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
}