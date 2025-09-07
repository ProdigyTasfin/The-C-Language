#include <stdio.h>

int main()
{   int i,j;
    float t[7][3];
    float c, f;

    for(i = 0; i<7; i++)
        {
    printf("Day - %d ", i+1);
    for(j=0;j<3;j++)
        {
            printf(" Temp- %d = ", j+1);
            scanf("%f",&t[i][j]);
        }
    }

    for(i = 0; i<7; i++)
        {
    for(j=0;j<3;j++)
        {   
            c = t[i][j];
            f = (c * 9/5.0)+32 ;
            printf("Day - %d Temp- %d = %.2f\t\n",i+1,j+1,f);
        }

}

        }
    
