#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100
#define MAX_LOANS 100

struct account {
    int accountNumber;
    char name[50];
    float balance;
};

struct loan {
    int accountNumber;
    float amount;
    float interestRate;
    char dueDate[20];
};

void createAccount(struct account accounts[], int *count) {
    if (*count >= MAX_ACCOUNTS) {
        printf("Maximum number of accounts reached.\n");
        return;
    }
    
    struct account newAccount;
    printf("Enter account number: ");
    scanf("%d", &newAccount.accountNumber);
    printf("Enter account name: ");
    scanf("%s", newAccount.name);
    printf("Enter initial balance: ");
    scanf("%f", &newAccount.balance);
    
    accounts[*count] = newAccount;
    (*count)++;
    
    printf("Account created successfully.\n");
}

void editAccount(struct account accounts[], int count) {
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    
    int index = -1;
    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        printf("Account not found.\n");
        return;
    }
    
    printf("Account found:\n");
    printf("Account number: %d\n", accounts[index].accountNumber);
    printf("Account name: %s\n", accounts[index].name);
    printf("Account balance: %.2f\n", accounts[index].balance);
    
    char choice;
    printf("Edit account? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        printf("Enter new account name: ");
        scanf("%s", accounts[index].name);
        printf("Enter new account balance: ");
        scanf("%f", &accounts[index].balance);
        printf("Account edited successfully.\n");
    }
}

void displayAccounts(struct account accounts[], int count) {
    printf("List of accounts:\n");
    for (int i = 0; i < count; i++) {
        printf("%s - %.2f\n", accounts[i].name, accounts[i].balance);
    }
}

void recordLoan(struct loan loans[], int *count, struct account accounts[], int accountCount) {
    if (*count >= MAX_LOANS) {
        printf("Maximum number of loans reached.\n");
        return;
    }
    
    int accountNumber;
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    
    int index = -1;
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        printf("Account not found.\n");
        return;
    }
    
    struct loan newLoan;
    newLoan.accountNumber = accountNumber;
    printf("Enter loan amount: ");
    scanf("%f", &newLoan.amount);
    printf("Enter interest rate (as a decimal): ");
    scanf("%f", &newLoan.interestRate);
    printf("Enter due date (YYYY-MM-DD): ");
    scanf("%s", newLoan.dueDate);
    loans[*count] = newLoan;
(*count)++;

printf("Loan recorded successfully.\n");
}


void displayLoans(struct loan loans[], int count) {
printf("List of loans:\n");
for (int i = 0; i < count; i++) {
printf("Account number: %d\n", loans[i].accountNumber);
printf("Loan amount: %.2f\n", loans[i].amount);
printf("Interest rate: %.2f%%\n", loans[i].interestRate * 100);
printf("Due date: %s\n", loans[i].dueDate);
printf("Interest accrued: %.2f\n", loans[i].amount * loans[i].interestRate);
}
}

int main() {
struct account accounts[MAX_ACCOUNTS];
int accountCount = 0;
struct loan loans[MAX_LOANS];
int loanCount = 0;

int choice;
while (1) {
    printf("\nBanking System Menu:\n");
    printf("1. Create account\n");
    printf("2. Edit account\n");
    printf("3. Display accounts\n");
    printf("4. Record loan\n");
    printf("5. Display loans\n");
    printf("6. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            createAccount(accounts, &accountCount);
            break;
        case 2:
            editAccount(accounts, accountCount);
            break;
        case 3:
            displayAccounts(accounts, accountCount);
            break;
        case 4:
            recordLoan(loans, &loanCount, accounts, accountCount);
            break;
        case 5:
            displayLoans(loans, loanCount);
            break;
        case 6:
            printf("Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice.\n");
            break;
    }
}

return 0;
}
