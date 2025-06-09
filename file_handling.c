#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[100];

    // Writing to the file
    file = fopen("example.txt", "w"); // Open for writing
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    fprintf(file, "Hello, this is a test file.\nWelcome to file handling in C!\n");
    fclose(file); // Close the file after writing

    // Reading from the file
    file = fopen("example.txt", "r"); // Open for reading
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("Reading contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file); // Close the file after reading

    return 0;
}
