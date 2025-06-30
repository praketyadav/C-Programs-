#include <stdio.h>

int isLeapYear(int year) {
    // Leap year logic
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

void printDaysInMonths(int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};

    if (isLeapYear(year)) {
        daysInMonth[1] = 29; // February gets 29 days in leap year
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    printf("Days in each month:\n");
    for (int i = 0; i < 12; i++) {
        printf("Month %2d: %2d days\n", i + 1, daysInMonth[i]);
    }
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year <= 0)
        printf("Please enter a valid positive year.\n");
    else
        printDaysInMonths(year);

    return 0;
}
