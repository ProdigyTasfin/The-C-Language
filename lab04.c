#include <stdio.h>

int main()
{
    //   EXERCISE 01
    // {
    // int x = 1, i =1;
    // while (i <= 9)
    // {
    // x = x*i;
    // i = i+1;
    // printf("\nThe value of x and i is %d, %d, respectively\n", x,i );
    // }
    // EXERCISE 02
    // int i = 0;
    // while (i <= 99)
    // {
    //     scanf("%d", &i);
    //     printf("You Enter -> %d\n", i);
    // }

    // int n, i;
    // printf("Enter n: ");
    // scanf("%d", &n);

    // // a) 1 + 2 + 3 + ... + n (while)
    // int sum_a = 0;
    // i = 1;
    // while (i <= n) {
    //     sum_a += i;
    //     i++;
    // }

    // // b) 1 + 1/2 + 1/3 + ... + 1/n (do-while)
    // float sum_b = 0;
    // i = 1;
    // do {
    //     sum_b += 1.0 / i;
    //     i++;
    // } while (i <= n);

    // // c) 1*2 + 3*4 + 5*6 + ... (while)
    // int sum_c = 0;
    // i = 1;
    // while (i < n) {
    //     sum_c += i * (i + 1);
    //     i += 2;
    // }

    // // d) 1*2*3 + 2*3*4 + ... (do-while)
    // int sum_d = 0;
    // i = 1;
    // do {
    //     sum_d += i * (i + 1) * (i + 2);
    //     i++;
    // } while (i <= n);

    // // e) 1 + 2 + 4 + 7 + 11 + ... (while)
    // int sum_e = 1, term = 1, diff = 1;
    // i = 1;
    // while (i < n) {
    //     diff++;
    //     term = term + diff;
    //     sum_e += term;
    //     i++;
    // }

    // printf("a) %d\nb) %.2f\nc) %d\nd) %d\ne) %d\n", sum_a, sum_b, sum_c, sum_d, sum_e);

    int start_year, end_year;
    printf("\nEnter start year: ");
    scanf("%d", &start_year);
    printf("Enter end year: ");
    scanf("%d", &end_year);

    printf("\nLeap years between %d and %d:\n", start_year, end_year);
    int year = start_year;
    while (year <= end_year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
        year++;
    }
    printf("\n");

    return 0;
}
