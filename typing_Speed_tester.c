#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    char input[500];
    char target[] = "The quick brown fox jumps over the lazy dog.";
    time_t start, end;
    double time_taken;
    int words;

    printf("Type the following sentence as fast as you can:\n");
    printf("\"%s\"\n", target);
    printf("\nPress Enter when you're ready...");
    getchar(); // Wait for user to press Enter

    time(&start); // Start time

    printf("\nStart typing:\n");
    fgets(input, sizeof(input), stdin);
    time(&end); // End time

    time_taken = difftime(end, start);

    if (strcmp(input, target) == 0 || strncmp(input, target, strlen(target)) == 0) {
        words = 9; // The sentence has 9 words
        double wpm = (words / time_taken) * 60;
        printf("\nWell done!\n");
        printf("Time taken: %.2f seconds\n", time_taken);
        printf("Typing Speed: %.2f WPM (words per minute)\n", wpm);
    } else {
        printf("\nTyped sentence did not match.\n");
        printf("Try again for better accuracy.\n");
    }

    return 0;
}
