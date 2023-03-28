#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User {
    char username[50];
    char password[50];
};

struct Product {
    char name[50];
    char category[50];
    int quantity;
};

struct User users[100];
struct Product products[100];
int num_users = 0;
int num_products = 0;

void create_user(char *username, char *password) {
    strcpy(users[num_users].username, username);
    strcpy(users[num_users].password, password);
    num_users++;
}

int login(char *username, char *password) {
    int i;
    for (i = 0; i < num_users; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return 1;
        }
    }
    return 0;
}

void add_product(char *name, char *category, int quantity) {
    strcpy(products[num_products].name, name);
    strcpy(products[num_products].category, category);
    products[num_products].quantity = quantity;
    num_products++;
}

void view_products() {
    int i;
    printf("All Products:\n");
    for (i = 0; i < num_products; i++) {
        printf("Name: %s, Category: %s, Quantity: %d\n", products[i].name, products[i].category, products[i].quantity);
    }
}

int main() {
    int choice;
    char username[50], password[50];
    char name[50], category[50];
    int quantity;
    do {
        printf("\n1. Create Account\n2. Login\n3. Add Product\n4. View Products\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter username: ");
                scanf("%s", username);
                printf("Enter password: ");
                scanf("%s", password);
                create_user(username, password);
                printf("Account created successfully.\n");
                break;
            case 2:
                printf("Enter username: ");
                scanf("%s", username);
                printf("Enter password: ");
                scanf("%s", password);
                if (login(username, password)) {
                    printf("Login successful.\n");
                } else {
                    printf("Invalid username or password.\n");
                }
                break;
            case 3:
                printf("Enter product name: ");
                scanf("%s", name);
                printf("Enter category: ");
                scanf("%s", category);
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                add_product(name, category, quantity);
                printf("Product added successfully.\n");
                break;
            case 4:
                view_products();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}

