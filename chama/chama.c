#include <stdio.h>
#include <string.h>

// Define data structures
struct Account {
    char username[20];
    char password[20];
    float balance;
};

struct Transaction {
    char sender[20];
    char receiver[20];
    float amount;
};

// Function to create a new account
void createAccount(struct Account accounts[], int *count) {
    printf("Enter username: ");
    scanf("%s", accounts[*count].username);
    printf("Enter password: ");
    scanf("%s", accounts[*count].password);
    accounts[*count].balance = 0.0;
    *count += 1;
}

// Function to check if an account exists
int accountExists(struct Account accounts[], int count, char username[], char password[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(accounts[i].username, username) == 0 && strcmp(accounts[i].password, password) == 0) {
            return i;
        }
    }
    return -1;
}

// Function to display account balance
void checkBalance(struct Account accounts[], int index) {
    printf("Account balance: KES %.2f\n", accounts[index].balance);
}

// Function to deposit or withdraw funds
void updateBalance(struct Account accounts[], int index, float amount) {
    accounts[index].balance += amount;
    printf("Updated balance: KES %.2f\n", accounts[index].balance);
}

// Function to transfer funds
void transferFunds(struct Account accounts[], int count, struct Transaction transactions[], int *txCount, int senderIndex) {
    char receiver[20];
    float amount;
    printf("Enter receiver username: ");
    scanf("%s", receiver);
    int receiverIndex = accountExists(accounts, count, receiver, "");
    if (receiverIndex == -1) {
        printf("Receiver account does not exist.\n");
        return;
    }
    printf("Enter transfer amount: ");
    scanf("%f", &amount);
    if (amount > accounts[senderIndex].balance) {
        printf("Insufficient funds.\n");
        return;
    }
    updateBalance(accounts, senderIndex, -amount);
    updateBalance(accounts, receiverIndex, amount);
    strcpy(transactions[*txCount].sender, accounts[senderIndex].username);
    strcpy(transactions[*txCount].receiver, receiver);
    transactions[*txCount].amount = amount;
    *txCount += 1;
}

int main() {
    struct Account accounts[100];
    struct Transaction transactions[1000];
    int count = 0;
    int txCount = 0;
    int choice, index;
    char username[20], password[20];
    float amount;
    
    do {
        printf("1. Create account\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createAccount(accounts, &count);
                break;
            case 2:
                printf("Enter username: ");
                scanf("%s", username);
                printf("Enter password: ");
                scanf("%s", password);
                index = accountExists(accounts, count, username, password);
                if (index == -1) {
                    printf("Invalid username or password.\n");
                    break;
                }
                printf("Welcome, %s.\n", accounts[index].username);
                do {
                    printf("1. Check balance\n");
                    printf("2. Deposit funds\n");
                    printf("3. Withdraw funds\n");
		printf("4. Transfer funds\n");
printf("5. View transaction history\n");
printf("6. Logout\n");
printf("Enter your choice: ");
scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        checkBalance(accounts, index);
                        break;
                    case 2:
                        printf("Enter deposit amount: ");
                        scanf("%f", &amount);
                        updateBalance(accounts, index, amount);
                        break;
                    case 3:
                        printf("Enter withdrawal amount: ");
                        scanf("%f", &amount);
                        if (amount > accounts[index].balance) {
                            printf("Insufficient funds.\n");
                            break;
                        }
                        updateBalance(accounts, index, -amount);
                        break;
                    case 4:
                        transferFunds(accounts, count, transactions, &txCount, index);
                        break;
                    case 5:
                        printf("Transaction history:\n");
                        for (int i = 0; i < txCount; i++) {
                            printf("%s transferred KES %.2f to %s.\n", transactions[i].sender, transactions[i].amount, transactions[i].receiver);
                        }
                        break;
                    case 6:
                        printf("Logged out.\n");
                        break;
                    default:
                        printf("Invalid choice.\n");
                        break;
                }
            } while (choice != 6);
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

