#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length, hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);

    length = strlen(password);

    // Remove newline character if present
    if (password[length - 1] == '\n') {
        password[length - 1] = '\0';
        length--;
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else if (ispunct(password[i])) hasSpecial = 1;
    }

    if (length < 8)
        printf("Weak password: Too short (minimum 8 characters).\n");
    else if (!hasUpper || !hasLower || !hasDigit || !hasSpecial)
        printf("Weak password: Must include uppercase, lowercase, digit, and special character.\n");
    else
        printf("Strong password!\n");

    return 0;
}
