#include <stdio.h>

int main() {
    float input;
    int choice;

    printf("Length Unit Converter\n");
    printf("1. Meters to Kilometers\n2. Meters to Feet\n3. Meters to Inches\n4. Meters to Miles\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter value in meters: ");
    scanf("%f", &input);

    switch (choice) {
        case 1: printf("Kilometers: %.3f\n", input / 1000); break;
        case 2: printf("Feet: %.3f\n", input * 3.28084); break;
        case 3: printf("Inches: %.3f\n", input * 39.3701); break;
        case 4: printf("Miles: %.3f\n", input / 1609.34); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}
