#include <stdio.h>
#include <math.h>

int main()
{   
    // int grade_number;
    // printf("Enter The Number\n");
    // scanf("%d",&grade_number);
    // if (grade_number >= 60){
    // printf("\nCongratulation\n");
    // printf("\nPassed\n");
    // }
    // else {printf("\nSorry\n");
    // printf("\nFailed\n");
    // }

    // int num1 , num2, Q, R;
    // printf("Enter your first number:");
    // scanf("%d", &num1);
    // printf("Enter your second number:");
    // scanf("%d", &num2);
    
    // if (num2 == 0)
    // {
    //    printf("Error Can't divide");
    // }
    // else {
    //     Q = num1 / num2;
    //     R = num1 % num2;
    //     printf( "Q=%d,  R=%d", Q, R);
    // }


    //  int year ;
    //  printf(" Enter Your Year: ");
    //  scanf ("%d" , &year);


    //  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    //     printf( "Yes, This is a leap year. \n");
    //  }
    //  else printf(" No this is not a leap year. \n");

    // int num;

    // printf("Please Enter your number : ");
    // scanf("%d", &num);

    // if (num % 2 == 0)
    // {
    //     printf("The number you entered is EVEN");
    
    // }
    // else printf("The number you entered is ODD");

    // int num;
    // printf("Please Enter the number : ");
    // scanf("%d", &num);

    // if (90 <= num && num <= 100)
    // {
    //     printf("Grade is A.");
    // }
    // else if (80 <= num && num <=89)
    // {
    //     printf("Grade is B.");
    // }
    // else if (70 <= num && num <=79)
    // {
    //     printf("Grade is C.");
    // }
    // else if (60 <= num && num <=69)
    // {
    //     printf("Grade is D.");
    // }
    // else if (0 <= num && num <=59)
    // {
    //     printf("Grade is F.");
    // }
    // else printf("Invalid input.");
    
    // int Ah, Am, As, Bh, Bm, Bs;
    // printf("Please Enter Ah = ");
    // scanf("%d", &Ah);
    // printf("Please Enter Am = ");
    // scanf("%d", &Am);
    // printf("Please Enter As = ");
    // scanf("%d", &As);
    // printf("Please Enter Bh = ");
    // scanf("%d", &Bh);
    // printf("Please Enter Bm = ");
    // scanf("%d", &Bm);
    // printf("Please Enter Bs = ");
    // scanf("%d", &Bs);

    // int A = (Ah * 60 * 60) + (Am * 60) + As;
    // int B = (Bh * 60 * 60) + (Bm * 60) + Bs;

    // if (A > B)
    // {
    //     printf("\nA takes more time.\n");
    // }
    // else printf("\nB takes more time.\n");
    
    // int a, b, c;
    
    // printf("Please Enter a = ");
    // scanf("%d", &a);
    // printf("Please Enter b = ");
    // scanf("%d", &b);
    // printf("Please Enter c = ");
    // scanf("%d", &c);

    // int min, mid, max;

    // // Find min
    // if (a <= b && a <= c)
    //     min = a;
    // else if (b <= a && b <= c)
    //     min = b;
    // else
    //     min = c;

    // // Find max
    // if (a >= b && a >= c)
    //     max = a;
    // else if (b >= a && b >= c)
    //     max = b;
    // else
    //     max = c;

    // // Find median (the one that's not min or max)
    // if ((a != min && a != max) || (a == b && a != c) || (a == c && a != b))
    //     mid = a;
    // else if ((b != min && b != max) || (b == c && b != a))
    //     mid = b;
    // else
    //     mid = c;

    // printf("Minimum = %d\n", min);
    // printf("Median = %d\n", mid);
    // printf("Maximum = %d\n", max);

    int x, y;
    printf("Please Enter x, y: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("This point is in Region 1\n");
    else if (x < 0 && y > 0)
        printf("This point is in Region 2\n");
    else if (x < 0 && y < 0)
        printf("This point is in Region 3\n");
    else if (x > 0 && y < 0)
        printf("This point is in Region 4\n");
    else if (x == 0 && y == 0)
        printf("This point is at the Origin\n");
    else if (x == 0)
        printf("This point is on the Y-axis\n");
    else if (y == 0)
        printf("This point is on the X-axis\n");

     return 0;
}