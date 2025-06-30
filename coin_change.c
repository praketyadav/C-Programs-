#include <stdio.h>

void findMinCoins(int amount) {
    int coins[] = {100, 50, 20, 10, 5, 2, 1}; // Denominations in Indian currency
    int n = sizeof(coins) / sizeof(coins[0]);
    printf("Amount: ₹%d\n", amount);
    printf("Coins used:\n");

    for (int i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            printf("₹%d ", coins[i]);
        }
    }
    printf("\n");
}

int main() {
    int amount;
    printf("Enter the amount to make change for: ₹");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Please enter a valid amount greater than 0.\n");
    } else {
        findMinCoins(amount);
    }

    return 0;
}
