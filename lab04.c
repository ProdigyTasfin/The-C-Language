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

    // int start_year, end_year;
    // printf("\nEnter start year: ");
    // scanf("%d", &start_year);
    // printf("Enter end year: ");
    // scanf("%d", &end_year);

    // printf("\nLeap years between %d and %d:\n", start_year, end_year);
    // int year = start_year;
    // while (year <= end_year) {
    //     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    //         printf("%d \n", year);
    //     }
    //     year++;
    // }
    int T;
    printf("\nEnter number of test cases: ");
    scanf("%d", &T);

    int t = 1;
    do {
        int term1, term2, final, attendance, ct1, ct2, ct3;
        printf("\nEnter scores for Case %d (T1 T2 Final Att CT1 CT2 CT3):\n", t);
        scanf("%d %d %d %d %d %d %d", &term1, &term2, &final, &attendance, &ct1, &ct2, &ct3);

        // Average of best two class tests
        int min_ct = ct1;
        if (ct2 < min_ct) min_ct = ct2;
        if (ct3 < min_ct) min_ct = ct3;
        int ct_sum = ct1 + ct2 + ct3 - min_ct;
        float ct_avg = ct_sum / 2.0;

        int total = term1 + term2 + final + attendance + (int)ct_avg;

        char grade;
        if (total >= 90) grade = 'A';
        else if (total >= 80) grade = 'B';
        else if (total >= 70) grade = 'C';
        else if (total >= 60) grade = 'D';
        else grade = 'F';

        printf("Case %d: %c\n", t, grade);
        t++;
    } while (t <= T);


    return 0;
}
