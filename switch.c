// #include <stdio.h>

// int main(){
//      int a;
//      printf("Enter your value: ");
//      scanf("%d", &a);
//      switch (a)
//      {
//      case 1:
//         printf ("You entered 1 \n");
//         break;
//       case 2:
//         printf ("You entered 2 \n");
//         break;
//        case 3:
//         printf ("You entered 3 \n");
//         break;
//          case 4:
//         printf ("You entered 4 \n");
//         break;  
//      default: printf("Nothing matched \n");
//         break;
//      }
//     return 0;
// }

// Suppose you have 5 students and they want to see their marks, so write a function to get their mark

#include <stdio.h>

int main() {
    int choice;

    printf("Enter student number (1-5):\n");
    printf("1. Jamal\n");
    printf("2. Farhan\n");
    printf("3. Shakib\n");
    printf("4. Yamin\n");
    printf("5. Ahona\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Jamal, you got 95%%\n");
            break;
        case 2:
            printf("Farhan, you got 85%%\n");
            break;
        case 3:
            printf("Shakib, you got 89%%\n");
            break;
        case 4:
            printf("Yamin, you got 92%%\n");
            break;
        case 5:
            printf("Ahona, you got 90%%\n");
            break;
        default:
            printf("Nothing matched\n");
    }

    return 0;
}
