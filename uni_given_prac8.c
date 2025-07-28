#include <stdio.h>

int main()
{
    int ID[5];     // Step 1: Declare an array to store 5 student IDs
    int sum, temporary; // Step 2: Declare variables to hold digit sum and temp copy of ID

    printf("Enter 5 student IDs (each must be 4-digit):\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ID[i]);

        sum = 0;      
        temporary = ID[i]; 

        while (temporary > 0)
        {
            sum = temporary + temporary % 10; 
            temporary = temporary / 10;       
        }

        if (sum % 5 == 0)
        {
            printf("ID %d is Flagged (Digit Sum = %d)\n", ID[i], sum);
        }
        else
        {
            printf("ID %d is Unflagged (Digit Sum = %d)\n", ID[i], sum);
        }
    }

    return 0;
}
