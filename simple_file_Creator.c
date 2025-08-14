#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50], content[200];

    printf("Enter filename: ");
    scanf("%s", filename);
    printf("Enter text: ");
    scanf(" %[^\n]", content);

    fp = fopen(filename, "w");
    if (!fp) {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(fp, "%s", content);
    fclose(fp);
    printf("File '%s' created.\n", filename);
    return 0;
}
