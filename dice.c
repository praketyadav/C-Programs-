#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rollDice() {
    int die1 = rand() % 6 + 1; // random number between 1-6
    int die2 = rand() % 6 + 1;
    int total = die1 + die2;

    printf("You rolled: %d and %d\n", die1, die2);
    printf("Total: %d\n", total);

    if (total == 7) {
        printf("🎉 You win!\n");
    } else {
        printf("😞 Try again.\n");
    }
}

int main() {
    srand(time(0)); // seed random number generator

    char choice;
    printf("Welcome to the Dice Game!\n");

    do {
        printf("\nRoll the dice? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            rollDice();
        }
    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
