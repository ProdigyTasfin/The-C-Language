#include <stdio.h> 

int main()
{
    float t[7][3],sum=0,sumFinal=0,avg,max;
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
        printf("Day-%d\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Temp-%d=%f\t",j+1,t[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<7;i++)
    {
        for(sum=0,j=0;j<3;j++)
        {
            sum=sum+t[i][j];
        }
        printf("Day-%d Average=%f\n",i+1,sum/3);
        sumFinal+=sum;
    }

    avg=sumFinal/21.0;
    printf("Average temperature of the week is %f",avg);

    for(j=0;j<3;j++)
    {
        for(sum=0,i=0;i<7;i++)
        {
            sum=sum+t[i][j];
        }
        if(j==0)
            printf("\nMorning time Average=%f",sum/7);
        else if(j==1)
            printf("\nNoon time Average=%f",sum/7);
        else
            printf("\nNight time Average=%f",sum/7);

    }
    max=t[0][0];

    for(i=0;i<7;i++)
    {
        for(j=0;j<3;j++)
        {
            if(t[i][j]>max)
                max=t[i][j];
        }

    }
     printf("\nMax temperature=%f",max);

    return 0;
}