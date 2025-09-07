#include <stdio.h>

int main ()
{
    int marks [4][3];
    int i,j, sum;
    for(i = 0; i <= 4; i++){
        printf("Enter %d no. Student: ", i+1);
        for(sum =0, j = 0; j <=3; j++){
            scanf("%d",&marks[i][j]);
            sum += marks[i][j];
        }
        printf("Total marks %d no. student: %d\n", i+1, sum);
    }
}