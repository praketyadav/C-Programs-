#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, i;
    float sum = 0.0, average;
    struct Student students[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);  // allows space in name

        printf("Enter marks for %s: ", students[i].name);
        scanf("%d", &students[i].marks);

        sum += students[i].marks;
    }

    average = sum / n;
    printf("\nClass Average = %.2f\n", average);

    printf("\nStudents scoring above average:\n");
    for (i = 0; i < n; i++) {
        if (students[i].marks > average) {
            printf("%s - %d\n", students[i].name, students[i].marks);
        }
    }

    return 0;
}
