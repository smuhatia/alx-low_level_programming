#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct account {
    int accountNumber;
    char name[50];
    float balance;
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

int main() {
    struct account accounts[MAX_ACCOUNTS];
    int count = 0;
    
    int choice;
    do {
        printf("1. Create account\n");
        printf("2. Edit account\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createAccount(accounts, &count);
                break;
            case 2:
                editAccount(accounts, count);
                break;
            case 3:
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 3);
    
    return 0;
}

