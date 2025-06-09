#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    float marks;
};

void sortStudents(struct Student *students, int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    struct Student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for students
    students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input data
    for (int i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for %s: ", students[i].name);
        scanf("%f", &students[i].marks);
    }

    // Sort students by marks
    sortStudents(students, n);

    // Display sorted list
    printf("\nStudents sorted by marks (highest to lowest):\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f\n", students[i].name, students[i].marks);
    }

    // Free allocated memory
    free(students);

    return 0;
}
