#include <stdio.h>

int main()
{   int i,mark,n;
    float count = 0, sum = 0, avg;
    printf("Enter Number of Students: ");
    scanf("%d",&n);
    printf("Enter the marks of %d students: ",n);
    for(i = 0; i<n; i++){
        scanf("%d",&mark);
        if(mark >= 40){
            count++;
            sum +=mark;
            avg = sum / count;
        }

    }
    printf("The average mark (excluding those less than 40%%) is: %f",avg); //ff
     
    return 0;
}