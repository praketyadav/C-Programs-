#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*?";
    char password[100];

    printf("Enter desired password length (max 99): ");
    scanf("%d", &length);

    if (length <= 0 || length > 99) {
        printf("Invalid length.\n");
        return 1;
    }

    srand(time(0));  // Seed for randomness

    for (int i = 0; i < length; i++) {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[length] = '\0';  // Null-terminate the string

    printf("Generated Password: %s\n", password);

    return 0;
}
