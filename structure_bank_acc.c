#include <stdio.h>

// Create a structure representing a bank account of customers...

typedef struct bankAccount {
    char name[100];
    int accountNumber;
    char accountType[50];
    float balance;
} BankAccount;

int main() {
    BankAccount account;

    printf("Enter account holder name: ");
    scanf("%s", account.name); // Read full name

    printf("Enter account number: ");
    scanf("%d", account.accountNumber);

    printf("Enter account type (Savings/Checking): ");
    scanf("%s", account.accountType);

    printf("Enter balance: ");
    scanf("%f", &account.balance);

    printf("\nAccount Details:\n");
    printf("Name: %s\n", account.name);
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Type: %s\n", account.accountType);
    printf("Balance: %.2f\n", account.balance);

    return 0;
}