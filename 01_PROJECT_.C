#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Leave {
    int id;
    char name[50];
    char dept[40];
    char reason[256];
    int startDay, startMonth, startYear;
    int endDay, endMonth, endYear;
    int status;
    char remarks[256];
};

// Welcome
void WelcomeMessage(){
    printf("          ===================================================================================\n");
    printf("          |                                                                                 |\n");
    printf("          |            MEDICAL LEAVE APPLICATION & APPROVAL SYSTEM (MLAAS)                  |\n");
    printf("          |                                                                                 |\n");
    printf("          ===================================================================================\n");
    printf("          |                                                                                 |\n");
    printf("          |    Welcome to the Medical Leave Application & Approval System                   |\n");
    printf("          |                                                                                 |\n");
    printf("          |    -> Developed by: Department of CSE                                           |\n");
    printf("          |    -> Semester: Summer 2025                                                     |\n");
    printf("          |                                                                                 |\n");
    printf("          |    This system allows you to:                                                   |\n");
    printf("          |     - Register new leave from applicant                                         |\n");
    printf("          |     - View all request from the applicant                                       |\n");
    printf("          |     - Search by ID's and Update dates                                           |\n");
    printf("          |     - Approve/ Reject status                                                    |\n");
    printf("          |                                                                                 |\n");
    printf("          ===================================================================================\n");
    printf("\n\n\n");
    printf("                          Press any key to start the system...                               \n\n\n");
    getch();
}

// Goodbye
void GoodByeMessage(){
    printf("          ===================================================================================\n");
    printf("          Thank you for using Medical Leave System                                           \n");
    printf("          ===================================================================================\n");
}

//Menu
void Menu(){
    printf("========= MENU =========\n");
    printf("1. Register New Leave\n");
    printf("2. View All Requests\n");
    printf("3. Search by ID\n");
    printf("4. Approve/Reject\n");
    printf("5. Update Dates\n");
    printf("6. Exit\n");
}

//Date
int isValidDate(int d, int m, int y) {
    // Basic range checks
    //return 0 means valid date and return 1 means invalid date
    if (y < 1900) return 0;    // year too early
    if (m < 1 || m > 12) return 0;  // invalid month
    if (d < 1) return 0;       // day can't be less than 1

    // Days in months
    int mdays[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    // Check leap year
    int leap = 0;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        leap = 1;
    }

    // February in leap year
    if (m == 2 && leap == 1) {
        if (d > 29) return 0;
    } else {
        if (d > mdays[m]) return 0;
    }

    return 1;
}


// Compare two dates: returns -1 if date1<date2, 0 if equal, 1 if date1>date2
int compareDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    // -1 if first date is earlier than second
    // 0 if both are equal
    // 1 if first date is later

    if (y1 < y2) return -1;
    if (y1 > y2) return 1;

    if (m1 < m2) return -1;
    if (m1 > m2) return 1;

    if (d1 < d2) return -1;
    if (d1 > d2) return 1;

    return 0; // dates are equal
}

//Register
int registerLeave(struct Leave leaves[], int count, int nextID) {
    struct Leave newLeave;
    newLeave.id = nextID;

    getchar(); // clear leftover newline

    printf("Applicant Name: ");
    gets(newLeave.name);

    printf("Department: ");
    gets(newLeave.dept);

    printf("Reason (brief): ");
    gets(newLeave.reason);

    printf("Start Date (day month year): ");
    scanf("%d %d %d", &newLeave.startDay, &newLeave.startMonth, &newLeave.startYear);

    printf("End Date (day month year): ");
    scanf("%d %d %d", &newLeave.endDay, &newLeave.endMonth, &newLeave.endYear);

    // Check if start date is valid
    if (isValidDate(newLeave.startDay, newLeave.startMonth, newLeave.startYear) == 0) {
        printf("Start date is not valid.\n");
        return count;
    }

    // Check if end date is valid
    if (isValidDate(newLeave.endDay, newLeave.endMonth, newLeave.endYear) == 0) {
        printf("End date is not valid.\n");
        return count;
    }

    // Check that start date is not after end date
    if (compareDates(newLeave.startDay, newLeave.startMonth, newLeave.startYear,
                     newLeave.endDay, newLeave.endMonth, newLeave.endYear) > 0) {
        printf("Start date cannot be after end date.\n");
        return count;
    }


    newLeave.status = 0;
    newLeave.remarks[0] = '\0';
    leaves[count] = newLeave;

    printf("Leave registered successfully! ID: %d\n", newLeave.id);

    return count + 1;
}


//Display
void displayAll(struct Leave leaves[], int count) {
    int i;

    if (count == 0) {
        printf("No leave requests yet.\n");
    }

    printf("All Leave Requests:\n");

    for (i = 0; i < count; i++) {
        printf("ID: %d\n", leaves[i].id);
        printf("Name: %s\n", leaves[i].name);
        printf("Department: %s\n", leaves[i].dept);
        printf("Start Date: %02d/%02d/%04d\n",
                leaves[i].startDay, leaves[i].startMonth, leaves[i].startYear);
        printf("End Date: %02d/%02d/%04d\n",
                leaves[i].endDay, leaves[i].endMonth, leaves[i].endYear);

        if (leaves[i].status == 0) {
            printf("Status: Pending\n");
        }
        else if (leaves[i].status == 1) {
            printf("Status: Approved\n");
        }
        else {
            printf("Status: Rejected\n");
        }

        printf("----------------------------------------------------------------------------------------------------\n");
    }
}


//Search
void searchByID(struct Leave leaves[], int count) {
    int id;
    int found = 0;
    int i;

    printf("Enter Request ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (leaves[i].id == id) {
            printf("ID: %d\n", leaves[i].id);
            printf("Name: %s\n", leaves[i].name);
            printf("Department: %s\n", leaves[i].dept);
            printf("Start Date: %d/%d/%d\n",
                    leaves[i].startDay, leaves[i].startMonth, leaves[i].startYear);
            printf("End Date: %d/%d/%d\n",
                    leaves[i].endDay, leaves[i].endMonth, leaves[i].endYear);

            if (leaves[i].status == 0) {
                printf("Status: Pending\n");
            }
            else if (leaves[i].status == 1) {
                printf("Status: Approved\n");
            }
            else {
                printf("Status: Rejected\n");
            }

            if (leaves[i].remarks[0] != '\0') {
                printf("Remarks: %s\n", leaves[i].remarks);
            }

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Request with ID %d not found.\n", id);
    }
}

//Approve/Reject
void approveReject(struct Leave leaves[], int count) {
    int id;
    int found = 0;
    char status[20];
    int i;

    printf("Enter Request ID to approve/reject: ");
    scanf("%d", &id);
    getchar();

    for (i = 0; i < count; i++) {
        if (leaves[i].id == id) {
            printf("Type Approve / Reject / Cancel: ");
            gets(status);

            if (strcmp(status, "Approve") == 0 || strcmp(status, "approve") == 0) {
                leaves[i].status = 1;
                printf("Enter remarks (optional): ");
                gets(leaves[i].remarks);
                printf("Request approved.\n");
            }
            else if (strcmp(status, "Reject") == 0 || strcmp(status, "reject") == 0) {
                leaves[i].status = 2;
                printf("Enter remarks (required): ");
                gets(leaves[i].remarks);
                printf("Request rejected.\n");
            }
            else {
                printf("Operation cancelled.\n");
            }

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Request with ID %d not found.\n", id);
    }
}


// Update
void updateDates(struct Leave leaves[], int count) {
    int id;
    int found = 0;
    int i;

    printf("Enter Request ID to update: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (leaves[i].id == id) {
            printf("Enter new start date (day month year): ");
            scanf("%d %d %d",
                  &leaves[i].startDay,
                  &leaves[i].startMonth,
                  &leaves[i].startYear);

            printf("Enter new end date (day month year): ");
            scanf("%d %d %d",
                  &leaves[i].endDay,
                  &leaves[i].endMonth,
                  &leaves[i].endYear);

            // Validate the dates
            if (!isValidDate(leaves[i].startDay, leaves[i].startMonth, leaves[i].startYear) ||
                !isValidDate(leaves[i].endDay, leaves[i].endMonth, leaves[i].endYear)) {
                printf("Invalid dates. Update aborted.\n");
            }
            else if (compareDates(leaves[i].startDay, leaves[i].startMonth, leaves[i].startYear,
                                  leaves[i].endDay, leaves[i].endMonth, leaves[i].endYear) > 0) {
                printf("Start date is after end date. Update aborted.\n");
            }
            else {
                printf("Dates updated successfully.\n");
            }

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Request with ID %d not found.\n", id);
    }
}


// Main
int main() {
    struct Leave leaves[200];   // Array to store leave records
    int count = 0;              // How many leave requests are stored
    int nextID = 1001;          // First ID to assign to a new leave request
    int choice = 0;             // User's menu choice

    WelcomeMessage();           // Show welcome screen
    Menu();                     // Show menu options

    while (choice != 6) {       // Keep running until user selects Exit
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            count = registerLeave(leaves, count, nextID);
            nextID++;
        }
        else if (choice == 2) {
            displayAll(leaves, count);
        }
        else if (choice == 3) {
            searchByID(leaves, count);
        }
        else if (choice == 4) {
            approveReject(leaves, count);
        }
        else if (choice == 5) {
            updateDates(leaves, count);
        }
        else if (choice == 6) {
            break;
        }
        else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    GoodByeMessage();
    return 0;
}
