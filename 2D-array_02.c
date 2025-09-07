#include <stdio.h> 

int main()
{
    float t[7][3];
    int i,j;

    printf("Input data:\n");
    for(i=0;i<7;i++)
    {
        printf("Day-%d\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Temp-%d=",j+1);
            scanf("%f",&t[i][j]);
        }
    }

    printf("Output data:\n");
    for(i=0;i<7;i++)
    {
        printf("\n Day-%d\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Temp-%d = %.2f\t",j+1,t[i][j]);
        }
        printf("\n");
    }

}