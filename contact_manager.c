#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;
    char searchName[50];

    while (1) {
        printf("\n--- Contact Manager ---\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume newline left in buffer

        switch (choice) {
            case 1:
                if (count < MAX_CONTACTS) {
                    printf("Enter name: ");
                    fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
                    contacts[count].name[strcspn(contacts[count].name, "\n")] = '\0';

                    printf("Enter phone: ");
                    fgets(contacts[count].phone, sizeof(contacts[count].phone), stdin);
                    contacts[count].phone[strcspn(contacts[count].phone, "\n")] = '\0';

                    count++;
                    printf("Contact added!\n");
                } else {
                    printf("Contact list is full!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("No contacts to show.\n");
                } else {
                    printf("\n--- Contact List ---\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
                    }
                }
                break;

            case 3:
                printf("Enter name to search: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0';

                int found = 0;
                for (int i = 0; i < count; i++) {
                    if (strcmp(contacts[i].name, searchName) == 0) {
                        printf("Found: %s - %s\n", contacts[i].name, contacts[i].phone);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Contact not found.\n");
                break;

            case 4:
                printf("Exiting Contact Manager. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
