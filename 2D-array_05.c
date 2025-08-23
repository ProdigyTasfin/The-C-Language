#include <stdio.h>

int main ()
{
    int marks[3][4], i, j, sum = 0;
    int maximum;
    maximum = marks[0][0];

    for ( i = 0; i < 3; i++)
    {
        printf("%d Student's Mark\n",i+1);

        for ( j = 0; j < 4; j++)
        {   if(j==0)printf("Enter your Physics Number: ");
            else if(j==1)printf("Enter your Chemistry Number: ");
            else if(j==2)printf("Enter your Biology Number: ");
            else printf("Enter your Higher Math Number: ");
            scanf("%d",&marks[i][j]);
            sum += marks[i][j];
            maximum = marks[0][0];
            if(maximum < marks[i][j]){
            maximum = marks[i][j];}
        }
        if(j == 0)
        printf("%d maximum you got\n",maximum);
        printf("Total marks of 4th subjects: %d\n", sum);
        }
        
    }