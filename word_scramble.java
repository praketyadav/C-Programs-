#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to shuffle characters of a word
void shuffle(char *word, char *scrambled) {
    int len = strlen(word);
    int used[20] = {0};
    int i = 0;

    while (i < len) {
        int randIndex = rand() % len;
        if (!used[randIndex]) {
            scrambled[i++] = word[randIndex];
            used[randIndex] = 1;
        }
    }
    scrambled[len] = '\0';
}

int main() {
    srand(time(NULL));

    const char *wordList[] = {"apple", "banana", "orange", "grapes", "lemon"};
    int wordCount = sizeof(wordList) / sizeof(wordList[0]);

    char guess[20];
    int score = 0;

    printf("🎮 Welcome to Word Scramble Game!\n");
    printf("Unscramble the word. Type 'exit' to quit.\n");

    while (1) {
        int index = rand() % wordCount;
        const char *original = wordList[index];
        char scrambled[20];
        shuffle((char *)original, scrambled);

        printf("\nScrambled word: %s\nYour guess: ", scrambled);
        scanf("%s", guess);

        if (strcmp(guess, "exit") == 0) {
            break;
        }

        if (strcmp(guess, original) == 0) {
            printf("✅ Correct!\n");
            score++;
        } else {
            printf("❌ Wrong! The correct word was: %s\n", original);
        }
    }

    printf("\nThanks for playing! Your final score: %d\n", score);
    return 0;
}
