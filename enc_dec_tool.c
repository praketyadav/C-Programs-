#include <stdio.h>
#include <string.h>

void encrypt(char *text, int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        if (ch >= 'a' && ch <= 'z') {
            text[i] = ((ch - 'a' + key) % 26) + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            text[i] = ((ch - 'A' + key) % 26) + 'A';
        }
        // Leave non-alphabet characters unchanged
    }
}

void decrypt(char *text, int key) {
    encrypt(text, 26 - (key % 26)); // Reverse Caesar Cipher
}

int main() {
    char message[100];
    int key, choice;

    printf("Enter your message (alphabets only): ");
    fgets(message, sizeof(message), stdin);

    // Remove newline from input
    message[strcspn(message, "\n")] = 0;

    printf("Enter key (1-25): ");
    scanf("%d", &key);

    printf("\nChoose:\n1. Encrypt\n2. Decrypt\nChoice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        encrypt(message, key);
        printf("Encrypted message: %s\n", message);
    } else if (choice == 2) {
        decrypt(message, key);
        printf("Decrypted message: %s\n", message);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
