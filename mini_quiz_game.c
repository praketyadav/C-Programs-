#include <stdio.h>
#include <string.h>

int main() {
    int score = 0;
    char answer[50];

    printf("Welcome to the Quiz Game!\n");
    printf("--------------------------\n");

    // Question 1
    printf("1. What is the capital of France?\n");
    printf("Your answer: ");
    scanf(" %[^\n]", answer);
    if (strcasecmp(answer, "Paris") == 0) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is Paris.\n");
    }

    // Question 2
    printf("\n2. How many continents are there on Earth?\n");
    printf("Your answer: ");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "7") == 0) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 7.\n");
    }

    // Question 3
    printf("\n3. What programming language is this quiz written in?\n");
    printf("Your answer: ");
    scanf(" %[^\n]", answer);
    if (strcasecmp(answer, "C") == 0) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C.\n");
    }

    // Final score
    printf("\nYou scored %d out of 3.\n", score);
    if (score == 3)
        printf("🎉 Excellent!\n");
    else if (score == 2)
        printf("🙂 Good job!\n");
    else
        printf("😅 Better luck next time!\n");

    return 0;
}
