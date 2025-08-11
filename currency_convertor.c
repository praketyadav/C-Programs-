#include <stdio.h>

int main() {
    int choice;
    float amount, converted;

    printf("Currency Converter\n");
    printf("1. USD to INR\n");
    printf("2. INR to USD\n");
    printf("3. EUR to INR\n");
    printf("4. INR to EUR\n");
    printf("5. USD to EUR\n");
    printf("6. EUR to USD\n");

    printf("\nEnter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the amount: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            converted = amount * 83.00;
            printf("Amount in INR: ₹%.2f\n", converted);
            break;
        case 2:
            converted = amount / 83.00;
            printf("Amount in USD: $%.2f\n", converted);
            break;
        case 3:
            converted = amount * 90.00;
            printf("Amount in INR: ₹%.2f\n", converted);
            break;
        case 4:
            converted = amount / 90.00;
            printf("Amount in EUR: €%.2f\n", converted);
            break;
        case 5:
            converted = amount * 0.93;
            printf("Amount in EUR: €%.2f\n", converted);
            break;
        case 6:
            converted = amount / 0.93;
            printf("Amount in USD: $%.2f\n", converted);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
