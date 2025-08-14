#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Leave {
    int id;
    char name[50];
    char dept[40];
    char reason[256];
    int s_day, s_month, s_year;
    int e_day, e_month, e_year;
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
void showGoodByeMessage(){
    printf("          ===================================================================================\n");
    printf("          Thank you for using Medical Leave System                                           \n");
    printf("          ===================================================================================\n");
}

// Display Menu
void Menu(){
    printf("========= MENU =========\n");
    printf("1. Register New Leave\n");
    printf("2. View All Requests\n");
    printf("3. Search by ID\n");
    printf("4. Approve/Reject\n");
    printf("5. Update Dates\n");
    printf("6. Exit\n");
}

// Check valid date
int isValidDate(int d, int m, int y){
    if(y < 1900 || m < 1 || m > 12 || d < 1) return 0;
    int mdays[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int leap = ((y%4==0 && y%100!=0) || (y%400==0));
    if(leap && m == 2) return (d <= 29);
    return (d <= mdays[m]);
}

// Compare two dates: returns -1 if date1<date2, 0 if equal, 1 if date1>date2
int compareDates(int d1,int m1,int y1,int d2,int m2,int y2){
    if(y1 != y2) return (y1<y2)?-1:1;
    if(m1 != m2) return (m1<m2)?-1:1;
    if(d1 != d2) return (d1<d2)?-1:1;
    return 0;
}

// Register Leave
int registerLeave(struct Leave leaves[], int count, int nextID){
    struct Leave newLeave;
    newLeave.id = nextID;
    getchar(); // consume leftover newline
    printf("Applicant Name: ");
    scanf(" %[^\n]", newLeave.name);
    printf("Department: ");
    scanf(" %[^\n]", newLeave.dept);
    printf("Reason (brief): ");
    scanf(" %[^\n]", newLeave.reason);
    printf("Start Date (day month year): ");
    scanf("%d %d %d", &newLeave.s_day, &newLeave.s_month, &newLeave.s_year);
    printf("End Date (day month year): ");
    scanf("%d %d %d", &newLeave.e_day, &newLeave.e_month, &newLeave.e_year);

    if(!isValidDate(newLeave.s_day,newLeave.s_month,newLeave.s_year) ||
       !isValidDate(newLeave.e_day,newLeave.e_month,newLeave.e_year)){
        printf("Invalid dates. Registration failed.\n");
        return count;
    }

    if(compareDates(newLeave.s_day,newLeave.s_month,newLeave.s_year,
                    newLeave.e_day,newLeave.e_month,newLeave.e_year) > 0){
        printf("Start date after end date. Registration failed.\n");
        return count;
    }

    newLeave.status = 0;
    newLeave.remarks[0] = '\0';
    leaves[count] = newLeave;
    printf("Leave request registered successfully. ID: %d\n", newLeave.id);
    return count+1;
}

// Display All Requests
void displayAll(struct Leave leaves[], int count){
    if(count == 0){
        printf("No leave requests yet.\n");
        return;
    }
    printf("All Leave Requests:\n");
    for(int i=0;i<count;i++){
        char *status;
        if(leaves[i].status == 0) status="Pending";
        else if(leaves[i].status == 1) status="Approved";
        else status="Rejected";

        printf("ID: %d | Name: %s | Dept: %s | %02d/%02d/%04d to %02d/%02d/%04d | Status: %s\n",
            leaves[i].id, leaves[i].name, leaves[i].dept,
            leaves[i].s_day, leaves[i].s_month, leaves[i].s_year,
            leaves[i].e_day, leaves[i].e_month, leaves[i].e_year,
            status);
    }
}

// Search by ID
void searchByID(struct Leave leaves[], int count){
    int id, found=0;
    printf("Enter Request ID: ");
    scanf("%d",&id);
    for(int i=0;i<count;i++){
        if(leaves[i].id == id){
            char *status;
            if(leaves[i].status == 0) status="Pending";
            else if(leaves[i].status == 1) status="Approved";
            else status="Rejected";

            printf("ID: %d | Name: %s | Dept: %s | %02d/%02d/%04d to %02d/%02d/%04d | Status: %s\n",
                leaves[i].id, leaves[i].name, leaves[i].dept,
                leaves[i].s_day, leaves[i].s_month, leaves[i].s_year,
                leaves[i].e_day, leaves[i].e_month, leaves[i].e_year,
                status);
            if(leaves[i].remarks[0]!='\0') printf("Remarks: %s\n",leaves[i].remarks);
            found=1;
            break;
        }
    }
    if(!found) printf("Request with ID %d not found.\n",id);
}

// Approve/Reject
void approveReject(struct Leave leaves[], int count){
    int id, found=0;
    char choice;
    printf("Enter Request ID to approve/reject: ");
    scanf("%d",&id);
    for(int i=0;i<count;i++){
        if(leaves[i].id == id){
            printf("Approve (A) / Reject (R) / Cancel (C): ");
            getchar(); // consume leftover newline
            scanf("%c",&choice);
            if(choice=='A' || choice=='a'){
                leaves[i].status=1;
                printf("Enter remarks (optional): ");
                getchar();
                scanf(" %[^\n]", leaves[i].remarks);
                printf("Request approved.\n");
            } else if(choice=='R' || choice=='r'){
                leaves[i].status=2;
                printf("Enter remarks (required): ");
                getchar();
                scanf(" %[^\n]", leaves[i].remarks);
                printf("Request rejected.\n");
            } else printf("Operation cancelled.\n");
            found=1;
            break;
        }
    }
    if(!found) printf("Request with ID %d not found.\n",id);
}

// Update Dates
void updateDates(struct Leave leaves[], int count){
    int id, found=0;
    printf("Enter Request ID to update: ");
    scanf("%d",&id);
    for(int i=0;i<count;i++){
        if(leaves[i].id == id){
            printf("Enter new start date (day month year): ");
            scanf("%d %d %d",&leaves[i].s_day,&leaves[i].s_month,&leaves[i].s_year);
            printf("Enter new end date (day month year): ");
            scanf("%d %d %d",&leaves[i].e_day,&leaves[i].e_month,&leaves[i].e_year);

            if(!isValidDate(leaves[i].s_day,leaves[i].s_month,leaves[i].s_year) ||
               !isValidDate(leaves[i].e_day,leaves[i].e_month,leaves[i].e_year)){
                printf("Invalid dates. Update aborted.\n");
            } else if(compareDates(leaves[i].s_day,leaves[i].s_month,leaves[i].s_year,
                                   leaves[i].e_day,leaves[i].e_month,leaves[i].e_year)>0){
                printf("Start date after end date. Update aborted.\n");
            } else {
                printf("Dates updated successfully.\n");
            }
            found=1;
            break;
        }
    }
    if(!found) printf("Request with ID %d not found.\n",id);
}

// Main
int main(){
    struct Leave leaves[200];
    int count=0, nextID=1001, choice=0;

    WelcomeMessage();
    Menu();

    while(choice != 6){
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice==1) count=registerLeave(leaves,count,nextID++);
        else if(choice==2) displayAll(leaves,count);
        else if(choice==3) searchByID(leaves,count);
        else if(choice==4) approveReject(leaves,count);
        else if(choice==5) updateDates(leaves,count);
        else if(choice==6) break;
        else printf("Invalid choice.\n");
    }

    showGoodByeMessage();
    return 0;
}
