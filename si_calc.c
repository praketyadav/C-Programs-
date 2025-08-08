#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula
    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", interest);
    printf("Total Amount after %.2f years = %.2f\n", time, principal + interest);

    return 0;
}
