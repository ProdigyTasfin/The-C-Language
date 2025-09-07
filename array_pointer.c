#include <stdio.h>

int main() {
    int marks[] = {44, 55, 66, 77};

    int *j = &marks[0];  // OR simply: int *j = marks;

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d \n", i, *j);
        j++;
    }
    

    printf("Address of marks (as pointer): %llu\n", (unsigned long long) marks);
    printf("Address of marks (using &):    %llu\n", (unsigned long long) &marks);

    j++; // j now points to marks[1]

    printf("Address stored in j after j++: %llu\n", (unsigned long long) j);
    
    return 0;
}
