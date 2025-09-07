#include <stdio.h>

int main()

{
    int password[1] = {4321};
    int i = 1, pass, chance = 3;
    while (i <= 3)
    {
        printf("Enter Your Password:\t");
        scanf("%d", &pass);

        if (password[0] == pass)
        {
            printf(" Access Granted. \n");
            break;
        }
        if (password[0] != pass)
            {
                chance--;
                printf("You have %d chance(s)\n", chance);
                if (chance == 0){
                printf("Access Denied.\n");
                break;}
            }
        i++;
        }
        
        return 0;
    }