#include <stdio.h>

int main()
{ int speed[8], count =0;
    printf("Enter 8 Speed Values: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &speed[i]);
    if (speed[i] >= 100) {count= count+1;}
    }
    if (count == 0) printf("This trip is SAFE");
    else printf("This trip is UNSAFE");
}

    
