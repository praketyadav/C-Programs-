#include <stdio.h>

int main() {
    int pin, choice;
    float balance = 10000, amount;

    printf("Enter your 4-digit PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Incorrect PIN\n");
        return 0;
    }

    do {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance: ₹%.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount;
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > balance) printf("Insufficient balance\n");
                else balance -= amount;
                break;
            case 4:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid option\n");
        }
    } while (choice != 4);

    return 0;
}
