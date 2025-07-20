#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int roll;

    // Seed the random number generator
    srand(time(0));

    printf("Rolling the dice...\n");
    roll = (rand() % 6) + 1; // Generates a number between 1 and 6

    printf("You rolled a %d!\n", roll);

    return 0;
}
