#include <stdio.h>

//If-else

//Q: (Scholarship Check) University requires students to maintain GPA above 3.00 to keep their scholarship. 
// Write a C program to read GPA and print “Scholarship Active” if GPA ≥ 3.00, otherwise print “Scholarship Suspended”.

int main()
{
    float gpa;

    printf("Enter Your Current GPA (1.00 to 4.00): ");
    scanf("%f",&gpa);

    if (gpa > 1.00 && gpa > 4.00)
    {
        printf("Invalid GPA. ");
    }
    else if (gpa > 3.00 && gpa <= 4.00)
    {
        printf("Scholarship Active. ");
    }
    else printf("Scholarship Suspended. ");
    
    
    return 0;
}